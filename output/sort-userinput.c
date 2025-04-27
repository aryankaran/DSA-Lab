#include <stdio.h>
#include <stdlib.h>




void bubbleSort(int arr[], int n) {
int t;
/*
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
// Input array elements
for (int i = 0; i < n; i++) {
printf("Enter element no. %d: ", i + 1);
scanf("%d", &arr[i]);
}
*/
for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i] > arr[j]) {
// Swap arr[i] and arr[j]
t = arr[i];
arr[i] = arr[j];
arr[j] = t;
}
}
}
printf("\nSorted list:\n");
// Print out sorted array
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
// return 0;
}


void insertionSort(int arr[], int n) {
        
}

void selectionSort(int arr[], int n) {
    
}

int main() {
/*
    int arr[50], i = 0, moveon = 0;

    while (1) {
        scanf("%d", &arr[i]);

        printf("Enter 1 to exit \n");

        scanf("%d", &moveon);

        if (moveon == 1)
            break;

    }
*/
    int number_of_elements;
    printf("Enter no. of elements: ");
    scanf("%d", &number_of_elements);

    int arr[number_of_elements];
    printf("Enter the list of numbers: ");
    for (int i = 0; i < number_of_elements ; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("Select the sorting algo. :-> \n1. Bubble Sort \n2. Insertion Sort \n3. Selction Sort \n4. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubbleSort(arr, number_of_elements);
            break;

        case 2:
            insertionSort(arr);
            break;

        case 3:
            selectionSort(arr);
            break;
        
        case 4:
            break;

        default:
            printf("Invalid Choice !!! \n");

    }


/*
    for (int j = 0; j < number_of_elements ; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
*/
}