#include <stdio.h>

int main() {
    short a = 10;                      // short: so nguyen nho, 2 byte, pham vi ~ -32768 den 32767
    int b = 100;                       // int: so nguyen thong thuong, 4 byte, pham vi ~ -2 ty den 2 ty
    long c = 1000L;                    // long: so nguyen lon hon int, 4 hoac 8 byte tuy may
    long long d = 10000LL;             // long long: so nguyen rat lon, thuong 8 byte
    unsigned short ua = 20;            // unsigned short: so nguyen duong nho, 2 byte, pham vi 0 den 65535
    unsigned int ub = 200;             // unsigned int: so nguyen duong thong thuong, 4 byte, pham vi 0 den 4 ty
    unsigned long uc = 2000UL;         // unsigned long: so nguyen duong lon hon int, 4 hoac 8 byte
    unsigned long long ud = 20000ULL;  // unsigned long long: so nguyen duong rat lon, 8 byte
    char ch = 'A';                     // char: ky tu don, 1 byte, luu ma ASCII cua ky tu

    return 0;
}

