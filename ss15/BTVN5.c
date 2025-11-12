#include <stdio.h>

void maxFreq(int a[], int n, int *val, int *cnt) {
    int i, j, c;
    int mVal = a[0], mCnt = 0;

    for (i = 0; i < n; i++) {
        c = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) c++;
        }
        if (c > mCnt) {
            mCnt = c;
            mVal = a[i];
        }
    }

    *val = mVal;
    *cnt = mCnt;
}

int main() {
    int a[] = {1, 3, 2, 3, 4, 3, 5, 2, 2, 2};
    int n = sizeof(a) / sizeof(int);
    int v, c;

    maxFreq(a, n, &v, &c);

    printf("Phan tu nhieu nhat: %d\n", v);
    printf("So lan xuat hien: %d\n", c);

    return 0;
}
