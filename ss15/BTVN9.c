#include <stdio.h>

int minFreq(int a[], int n) {
    int i, j, c;
    int minVal = a[0];
    int minCnt = n + 1; 

    for (i = 0; i < n; i++) {
        c = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) c++;
        }

        int checked = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                checked = 1;
                break;
            }
        }

        if (!checked && c < minCnt) {
            minCnt = c;
            minVal = a[i];
        }
    }

    return minVal;
}

int main() {
    int a[] = {1, 3, 3, 2, 4, 2, 5};
    int n = sizeof(a) / sizeof(int);
    int val = minFreq(a, n);

    printf("Phan tu xuat hien it nhat: %d\n", val);
    return 0;
}

