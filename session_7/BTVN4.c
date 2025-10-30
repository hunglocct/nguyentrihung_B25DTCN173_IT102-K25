#include <stdio.h>

int main() {
    int dai, rong;
    int i, j;

    printf("Nhap chieu dai: ");
    scanf("%d", &dai);
    printf("Nhap chieu rong: ");
    scanf("%d", &rong);

    for (i = 0; i < rong; i++) {
        for (j = 0; j < dai; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


