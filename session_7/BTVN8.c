#include <stdio.h>

int dem_chu_so_xuat_hien(long long n, int x) {
    int count = 0;
    
    if (n == 0) {
        if (x == 0) {
            return 1;
        } else {
            return 0;
        }
    }
    
    if (n < 0) {
        n = -n;
    }
    
    while (n > 0) {
        int chu_so_cuoi = n % 10; 
        
        if (chu_so_cuoi == x) {
            count++;
        }
        
        n = n / 10;
    }
    
    return count;
}

int main() {
    long long so_n;
    int chu_so_x;
    int ket_qua;

    printf("Nhap so nguyen n: ");
    if (scanf("%lld", &so_n) != 1) {
        return 1;
    }

    printf("Nhap mot chu so x (0-9): ");
    if (scanf("%d", &chu_so_x) != 1 || chu_so_x < 0 || chu_so_x > 9) {
        return 1;
    }

    ket_qua = dem_chu_so_xuat_hien(so_n, chu_so_x);
    
    printf("\nChu so %d xuat hien %d lan trong so %lld.\n", chu_so_x, ket_qua, so_n);

    return 0;
}
