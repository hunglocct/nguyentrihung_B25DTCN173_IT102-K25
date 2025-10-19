#include <stdio.h>
#include <math.h> 
int main() {
    int a = 3, b = 4, c = 2; 
    double S; 

    S = (sqrt(pow(a, 2) + pow(b, 2)) / (c + 1.0)) + ((double)a * b / c) - sqrt(fabs(a - b) + pow(c, 2));

    printf("Gia tri cua bieu thuc S la: %.2f\n", S);

    return 0;
}

