#include <stdio.h>
int main() {
int n, t;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];
// Input array elements
for (int i = 0; i < n; i++) {
printf("Enter element no. %d: ", i + 1);
scanf("%d", &arr[i]);
}
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
return 0;
}