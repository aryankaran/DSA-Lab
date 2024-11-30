# Floyd's triangle

intial = 1
rows = int(input("Enter number of rows: "))

while (rows != 0):
    last = intial + rows
    for a in range(intial, last):
        print(a, end=' ')
    print("")
    intial = intial+rows
    rows = rows - 1


# Floyd's triangle

intial = 1
rows = int(input("Enter number of rows: "))

# Loop until all rows are printed
for i in range(1, rows + 1):
    last = intial + i  # Calculate the last number for the current row
    for a in range(intial, last):
        print(a, end=' ')
    print("")  # Move to the next line after each row
    intial = last  # Update the starting number for the next row
