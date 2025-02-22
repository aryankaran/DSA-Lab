#include <stdio.h>
    

void printArray(int arr[], int n){
    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");    
}

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    // decalre sub arrays
    int left[n1];  // frst sub arr
    int right[n2];  // 2nd sub array

    for (int i = 0; i < n1; i++) {
        left[i] = arr[p + i];
    }

    for (int j = 0 ; j < n2; j++) {
        right[j] = arr[q + 1 + j];
    }

    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < n2) {
        arr[k] = right[j];
        k++;
        j++;
    }
}


void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2; // mid-division

        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}


int main() {
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the list of numbers: ");
    for (int i = 0; i < n ; i++) {
        scanf("%d", &arr[i]);
    }

/*
    int n = 5;
    int arr[5] = {5,2,1,6,3};
*/    
    printf("Original array: ");
    printArray(arr, n);
    
    mergeSort(arr, 0, n-1);

    printf("Sorted   array: ");
    printArray(arr, n);
}