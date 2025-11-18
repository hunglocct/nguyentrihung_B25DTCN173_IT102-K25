
#include <stdio.h>
#define MAX_SIZE 100
void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}
int main() {
    int arr[MAX_SIZE];
    int n;
    int evenCount, oddCount;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n, &evenCount, &oddCount);
    printf("So phan tu chan: %d\n", evenCount);
    printf("So phan tu le: %d\n", oddCount);

    return 0;
}