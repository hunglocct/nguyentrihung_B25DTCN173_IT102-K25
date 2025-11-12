#include <stdio.h>

int xoa(int a[], int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;   
                j--;  
            }
        }
    }
    return n;
}

int main() {
    int a[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(a) / sizeof(int);
    int i;

    n = xoa(a, n);

    printf("Mang sau khi loai bo trung lap:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nKich thuoc moi: %d\n", n);

    return 0;
}

