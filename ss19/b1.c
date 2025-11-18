
#include <stdio.h>
#define MAX_SIZE 100
int findMax(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}
int main() {
    int arr[MAX_SIZE];
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, n);
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}