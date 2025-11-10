#include <stdio.h>

int inRa(int n); 

int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    if (inRa(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai so nguyen to.\n", n);

    return 0;
}


int inRa(int n) {
    int i;
    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; 
    }

    return 1;
}

