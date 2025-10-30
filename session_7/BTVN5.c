#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, count = 0, sum = 0;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d la so Armstrong.\n", n);
    } else {
        printf("%d khong phai la so Armstrong.\n", n);
    }

    return 0;
}

