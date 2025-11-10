#include <stdio.h>

void inRa(int n);

int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    printf("Giai thua la: ");
    inRa(n); 

    return 0;
}

void inRa(int n) {
    int i;
    long long gt = 1;

    for (i = 1; i <= n; i++) {
        gt *= i;
    }

    printf("%lld\n", gt);
}

