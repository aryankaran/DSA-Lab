'''
compute frequency of the pixels in a 8-bit image and print the results

'''


import cv2
import os

cwd = os.getcwd()
print(cwd)

# read file
img = cv2.imread(os.path.join(cwd,"ss.pgm") , 0)

(col, row) = img.shape[:2]

for i in range(256):
    count = 0
    for j in range(col):
        for k in range(row):
            if i == img[j,k]:
                count = count + 1
    print(f"pixel range: {i}, count: {count}")

