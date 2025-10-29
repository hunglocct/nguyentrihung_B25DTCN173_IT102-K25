#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("UCLN cua %d va %d la: %d\n", a, b, x);

    return 0;
}

