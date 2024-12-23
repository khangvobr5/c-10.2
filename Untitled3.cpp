#include <stdio.h>
#define MAX_SIZE 10
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                // Hoán d?i hai ph?n t?
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[MAX_SIZE] = {64, 34, 25, 12, 22, 11, 90, 0, -3, 77}; // Kh?i t?o và gán giá tr? cho m?ng
    int n = MAX_SIZE;
    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

