#include <stdio.h>

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {3, 2, 3, 4, 2, 6, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = countOccurrences(arr, n, x);
    printf("%d", result);
    return 0;
}
//độ phức tạp thời gian: O(n)
//độ phức tạp không gian: 0(1)