#include <stdio.h>
#include <math.h> 

int laSoNguyenTo(int n) {
    int i; // Khai bao i truoc vong lap
    if (n <= 1) {
        return 0;
    }
    
    int gioi_han = (int)sqrt((double)n);
    
    for (i = 2; i <= gioi_han; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void liet_ke_so_nguyen_to(int a, int b) {
    int start, end;
    int dem = 0;
    int i; // Khai bao i truoc vong lap

    if (a < b) {
        start = a;
        end = b;
    } else {
        start = b;
        end = a;
    }

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    if (start < 2) {
        start = 2;
    }

    for (i = start; i <= end; i++) {
        if (laSoNguyenTo(i)) {
            printf("%d ", i);
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co so nguyen to nao trong khoang nay.");
    }
    printf("\n");
}

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Nhap so nguyen b: ");
    if (scanf("%d", &b) != 1) return 1;

    liet_ke_so_nguyen_to(a, b);

    return 0;
}
