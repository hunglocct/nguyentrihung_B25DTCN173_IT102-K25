#include <stdio.h>

int main() {
    int n;

    printf("Nhap so: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("So %d la chan.\n", n);
    else
        printf("So %d la le.\n", n);

    return 0;
}

