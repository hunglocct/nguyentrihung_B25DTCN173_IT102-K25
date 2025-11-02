#include <stdio.h>

int main() {
    int i, j, n, d, arry[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu so %d: ", i);
        scanf("%d", &arry[i]);
    }

    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < n; i++) {
        d = 1; 

        if (arry[i] < 2)
            d = 0;
        else {
            for (j = 2; j * j <= arry[i]; j++) {
                if (arry[i] % j == 0) {
                    d = 0;
                    break;
                }
            }
        }

        if (d == 1)
            printf("%d ", arry[i]);
    }

    return 0;
}

