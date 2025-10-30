#include <stdio.h>
int main() {
    int n, x, dem = 0;
	printf("nhap n : ");
	scanf("%d", &n);
	printf("nhap x : ");
	scanf("%d", &x);
    
	if (n == 0 && x == 0) dem = 1;
    while (n > 0) {
    if (n % 10 == x) dem++;
        n /= 10;
    }

    printf("%d", dem);
    
    
    
    
    return 0;
}

