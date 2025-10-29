#include <stdio.h>

int main() {
    int n, temp, divisor = 1;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("-");
        n = -n;
    }

    temp = n;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    while (divisor != 0) {
        int digit = n / divisor;
        printf("%d ", digit);
        n %= divisor;
        divisor /= 10;
    }

    printf("\n");

    return 0;
}
