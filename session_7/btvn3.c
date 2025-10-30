#include <stdio.h>

int main() {
    int n, reversed = 0, original;

    printf("nhap so nguyen duong: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed) {
        printf(" %d la so doi xung\n", original);
    } else {
        printf("%d khong phai so doi xung\n", original);
    }

    return 0;
}

