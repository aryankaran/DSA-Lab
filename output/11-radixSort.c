#include <stdio.h>

void radixSort(int arr[], int n) {
    // Finding max value
    int maxval = 0;

    for (int i = 0; i < n-1; i++) {
        if (arr[i] > maxval) {
            maxval = arr[i];
        }
    }

    int digit_pos = 1, max_units = 10;
    while (maxval / digit_pos > 0) {
        // 2D pocket array zero
        int pocket[10][max_units];
/*
        not necessary to zeo init

        for (int k = 0; k< 10; k++) {
            for (int k0 = 0; k0 < max_units ; k0++) {
                pocket[k][k0] = 0;
            }
        }
*/    


        // Call index zero array
        int call_index[10];
        for (int ind = 0; ind < 10 ; ind++) {
            call_index[ind] = 0;
        }

        for (int i = 0; i < n; i++) {
            int k = (arr[i] / digit_pos) % 10;
            pocket[k][call_index[k]] = arr[i];
            call_index[k]++;

        }

        // collect all pockets values
        int index = 0;
        for (int j = 0; j < 10 ; j++) {

        
            if (call_index[j]) {
                for (int k = 0; k < call_index[j]; k++) {
                    arr[index] = pocket[j][k];
                    index++;
                }
            }
        }

        digit_pos *= 10;
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

    radixSort(arr, n);

    printf("Sorted array: : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
