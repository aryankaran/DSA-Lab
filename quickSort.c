#include <stdio.h>
#include <stdlib.h>

void swap(int *e, int *f) {
    int x = *e;
    *e = *f;
    *f = x;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i = i+1;

            swap(&arr[i], &arr[j]);
/*
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
*/
        }
    }

    swap(&arr[i+1], &arr[high]);
    return i+1;

}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
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

    quickSort(arr, 0, n-1);

    for (int i=0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}