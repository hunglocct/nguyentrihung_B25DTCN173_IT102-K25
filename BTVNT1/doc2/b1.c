#include <stdio.h>

int main() {
    char ten[50];
    int tuoi;

    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    printf("Ten ban la %sBan %d tuoi.\n", ten, tuoi);

    return 0;
}

