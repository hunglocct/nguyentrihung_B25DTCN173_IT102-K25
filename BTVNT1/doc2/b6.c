#include <stdio.h>

int main() {
    int n, dem = 0;
    float tong = 0;

    printf("Nhap so (nhap 0 de dung): ");
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        tong += n;
        dem++;
        printf("Nhap so (nhap 0 de dung): ");
    }

    if (dem == 0)
        printf("Khong co so nao duoc nhap.\n");
    else {
        printf("Tong cac so la: %.2f\n", tong);
        printf("Trung binh cong la: %.2f\n", tong / dem);
    }

    return 0;
}

