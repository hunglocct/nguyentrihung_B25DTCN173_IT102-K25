#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0, choice;
	printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap lai 3 so a, b, c\n");
        printf("2. Tinh tong 3 so\n");
        printf("3. Tinh trung binh cong 3 so\n");
        printf("4. In ra so nho nhat\n");
        printf("5. In ra so lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice != 1 && (a == 0 && b == 0 && c == 0)) {
            printf("Vui long nhap 3 so truoc!\n");
            continue; 	
        }

        switch(choice) {
            case 1:
                printf("Nhap a: ");
                scanf("%d", &a);
                printf("Nhap b: ");
                scanf("%d", &b);
                printf("Nhap c: ");
                scanf("%d", &c);
                break;
            case 2:
                printf("Tong 3 so: %d\n", a + b + c);
                break;
            case 3:
                printf("Trung binh cong: %.2f\n", (a + b + c) / 3.0);
                break;
            case 4: {
                int min = a;
                if (b < min) min = b;
                if (c < min) min = c;
                printf("So nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int max = a;
                if (b > max) max = b;
                if (c > max) max = c;
                printf("So lon nhat: %d\n", max);
                break;
            }
            case 6:
                printf("Goodbye !!!\n");
                break;
            default:
                printf("Lua chon khong dung!\n");
        }

    } while(choice != 6);

    return 0;
}

