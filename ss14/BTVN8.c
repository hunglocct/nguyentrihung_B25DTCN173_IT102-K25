#include <stdio.h>

int hoanHao(int n); 

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (hoanHao(a))
        printf("%d la so hoan hao.\n", a);
    else
        printf("%d khong phai so hoan hao.\n", a);

    if (hoanHao(b))
        printf("%d la so hoan hao.\n", b);
    else
        printf("%d khong phai so hoan hao.\n", b);

    return 0;
}

int hoanHao(int n) {
    if (n <= 1)
        return 0;

    int tong = 0;
  	 int i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            tong += i;
    }

    if (tong == n)
        return 1; 
    else
        return 0;
}

