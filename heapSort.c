#include <stdio.h>


void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *e, int *f) {
    int x = *e;
    *e = *f;
    *f = x;
}

void createHeap(int arr[], int n, int i) {
    int largest = i; // largest 
    int l = 2*i + 1; // left child
    int r = 2*i + 2; // right child

    // check left child
    if (l < n && arr[l] > arr[largest]) {
        largest = l;
    }

    // check right child
    if (r < n && arr[r] > arr[largest]) {
        largest = r;
    }


    // swap if root isn't largest
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // printArray(arr, n);
        createHeap(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    int i = n/2 -1;

    while (i >= 0) {
        createHeap(arr, n, i);
        i--;
    }

    i = n -1;
    while (i >= 0) {
        swap(&arr[0], &arr[i]);
        createHeap(arr, i , 0);
        i--;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    heapSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
