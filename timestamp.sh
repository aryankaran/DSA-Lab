#!/bin/bash

# Get a list of unique dates (YYYY-MM-DD) from the file modification times
dates=$(find . -type f -not -path "./.git/*" -printf '%TY-%Tm-%Td\n' | sort -u)

for date in $dates; do
  # Find files modified on this date and get their modification times (seconds since epoch)
  timestamps=$(find . -type f -not -path "./.git/*" -newermt "$date 00:00:00" ! -newermt "$date 23:59:59" -printf '%T@\n')

  # Find the latest timestamp (maximum value)
  latest_timestamp=$(echo "$timestamps" | sort -nr | head -n 1)

  # Format the latest timestamp into your desired format: "YYYY, Mon Day @HH:MM"
  # %Y = Year (2025), %b = Abbr. Month (Jun), %d = Day (27), %H = Hour, %M = Minute
  commit_msg_date=$(date -d @"$latest_timestamp" +"%Y, %b %d @%H:%M")

  # Add the files modified on this date to the staging area
  find . -type f -not -path "./.git/*" -newermt "$date 00:00:00" ! -newermt "$date 23:59:59" -exec git add {} +

  # Set GIT_COMMITTER_DATE to the latest timestamp and commit
  GIT_AUTHOR_DATE="@$latest_timestamp" GIT_COMMITTER_DATE="@$latest_timestamp" git commit -e -m "Lab : $commit_msg_date"
done
