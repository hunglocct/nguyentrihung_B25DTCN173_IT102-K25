#include <stdio.h>

int main() {
    int chon;
    float a, b, kq;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh tong hai so\n");
        printf("2. Tinh hieu hai so\n");
        printf("3. Tinh tich hai so\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &chon);

        if (chon >= 1 && chon <= 3) {
            printf("Nhap so thu nhat: ");
            scanf("%f", &a);
            printf("Nhap so thu hai: ");
            scanf("%f", &b);
        }

        switch (chon) {
            case 1:
                kq = a + b;
                printf("Tong hai so la: %.2f\n", kq);
                break;
            case 2:
                kq = a - b;
                printf("Hieu hai so la: %.2f\n", kq);
                break;
            case 3:
                kq = a * b;
                printf("Tich hai so la: %.2f\n", kq);
                break;
            case 4:
                printf("Chuong trinh ket thuc!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (chon != 4);

    return 0;
}

