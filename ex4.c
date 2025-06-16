#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
// Độ phức tạp không gian của đoạn mã là O(n)

int main () {
    int sum = 0;
    int n;
    int i =0;

    printf ("Nhap n:");
    scanf ("%d", &n);

    while (i < n) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
//Độ phức tạp không gian của đoạn mã là O(n)
