#include <stdio.h>

int main() {
    int n, i, tong = 0, a[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac so: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
            tong += a[i];
    }

    printf("Tong cac so le trong day la: %d\n", tong);

    return 0;
}

