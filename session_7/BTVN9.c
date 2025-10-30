#include <stdio.h>
#include <math.h>

void liet_ke_cap_so(long long n) {
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong n.\n");
        return;
    }
    
    int dem_cap = 0;
    
    long long a_max = (long long)cbrt((double)n);
    long long a; // Khai bao bien a truoc vong lap (Sua loi C89/C90)

    printf("Cac cap so nguyen khong am (a, b) thoa man a^3 + b^3 = %lld la:\n", n);

    for (a = 0; a <= a_max; a++) { 
        long long b_lap_phuong = n - a * a * a;
        
        if (b_lap_phuong < 0) {
            break; 
        }

        long long b = (long long)round(cbrt((double)b_lap_phuong));

        if (b * b * b == b_lap_phuong) {
            if (a <= b) {
                printf("(%lld, %lld)\n", a, b);
                dem_cap++;
            }
        }
    }
    
    if (dem_cap == 0) {
        printf("Khong co cap so nao thoa man.\n");
    }
}

int main() {
    long long n;

    printf("Nhap vao so nguyen duong n: ");
    if (scanf("%lld", &n) != 1) {
        printf("Loi nhap lieu.\n");
        return 1;
    }

    liet_ke_cap_so(n);

    return 0;
}
