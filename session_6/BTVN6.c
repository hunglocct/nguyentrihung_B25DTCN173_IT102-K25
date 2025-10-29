#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    while (1) { 
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Tong: %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu: %.2f\n", a - b);
                break;
            case 3:
                printf("Tich: %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Thuong: %.2f\n", a / b);
                else
                    printf("Loi: Khong the chia cho 0!\n");
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                return 0; 
            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }
    }

    return 0;
}

