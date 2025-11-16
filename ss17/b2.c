#include "stdio.h"
#include "string.h"
int main() {
    int choice;
    char str[100];

    printf("Menu:\n");
    printf("1. Chuyen chuoi thanh chu hoa\n");
    printf("2. Chuyen chuoi thanh chu thuong\n");
    printf("Nhap lua chon cua ban (1 hoac 2): ");
    scanf("%d", &choice);
    getchar(); // Đọc ký tự newline sau khi nhập số

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Loai bo ky tu newline

    if (choice == 1) {
        for (int i = 0; str[i]; i++) {
            str[i] = toupper(str[i]);
        }
        printf("Chuoi sau khi chuyen thanh chu hoa: %s\n", str);
    } else if (choice == 2) {
        for (int i = 0; str[i]; i++) {
            str[i] = tolower(str[i]);
        }
        printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", str);
    } else {
        printf("Lua chon khong hop le.\n");
    }

    return 0;
}