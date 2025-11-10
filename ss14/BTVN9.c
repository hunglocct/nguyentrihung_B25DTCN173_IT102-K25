#include <stdio.h>

int UCLN(int a, int b);

int main() {
    int x = 36, y = 60; 

    printf("Hai so la: %d va %d\n", x, y);
    printf("Uoc chung lon nhat la: %d\n", UCLN(x, y));

    return 0;
}

int UCLN(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

