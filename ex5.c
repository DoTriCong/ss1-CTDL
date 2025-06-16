#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {3, 4, 5, 6, 2, 7, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang truoc khi sap xep:\n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep:\n");
    printArray(arr, n);
    return 0;
}

//sắp xếp sử dụng thuật toán Bubble Sort
//độ phức tạp thời gian: O(n^2)
//độ phức tạp không gian: O(1)