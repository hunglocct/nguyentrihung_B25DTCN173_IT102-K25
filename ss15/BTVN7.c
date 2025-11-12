#include <stdio.h>

int binSearch(int a[], int n, int x) {
    int l = 0, r = n - 1, m;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x)
            return m;       
        else if (a[m] < x)
            l = m + 1;      
        else
            r = m - 1;      
    }
    return -1;            
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(a) / sizeof(int);
    int x = 7;
    int pos = binSearch(a, n, x);

    if (pos != -1)
        printf("Tim thay %d tai chi so %d\n", x, pos);
    else
        printf("Khong tim thay %d\n", x);

    return 0;
}

