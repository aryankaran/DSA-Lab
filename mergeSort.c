#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    // decalre sub arrays
    int left[n1 + 1];  // frst sub arr
    int right[n2 + 1];  // 2nd sub array

    for (int i = 1; i < n1; i++) {
        left[i] = arr[p + i - 1];
    }

    for (int j = 1 ; j < n2; j++) {
        right[j] = arr[q + j];
    }

    int i = 1, j = 1, k;

    for (k = p; k < r ; k++) {
        if (left[i] <= right[j]) {
            arr[k] = left[j];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
    }

    while (i <= n1) {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j <= n1) {
        arr[k] = left[j];
        k++;
        j++;
    }
}


void mergeSort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p+q) / 2; // divide

    for (int i=0; i < p ; i++) {
        printf("%d ", arr[i]);
    }
    
        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}



int main() {
/*
    int n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the list of numbers: ");
    for (int i = 0; i < n ; i++) {
        scanf("%d", &arr[i]);
    }
*/
    int n = 5;
    int arr[5] = {1,2,3 ,4,5};
    mergeSort(arr, 0, n-1);

    for (int i=0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}