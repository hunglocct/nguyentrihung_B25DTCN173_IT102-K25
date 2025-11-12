#include <stdio.h>

void sortAsc(int a[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int a[] = {5, 2, 9, 1, 3};
    int n = sizeof(a) / sizeof(int);
    int i;

    sortAsc(a, n);

    printf("Mang sau khi sap xep tang dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

