#include <stdio.h>

int main() {
    int tuoi;

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    if (tuoi < 12)
        printf("Tre em\n");
    else if (tuoi >= 13 && tuoi <= 17)
        printf("Thanh thieu nien\n");
    else if (tuoi >= 18 && tuoi <= 59)
        printf("Nguoi lon\n");
    else
        printf("Nguoi cao tuoi\n");

    return 0;
}

