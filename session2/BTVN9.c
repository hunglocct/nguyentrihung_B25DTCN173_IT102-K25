#include <stdio.h>
#include <math.h> 

int main() {
    int a = 2, b = 3, c = 1;
    double A;
	A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("Gia tri cua bieu thuc A la: %.2f\n", A);

    return 0;
}
