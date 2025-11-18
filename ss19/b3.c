#include <stdio.h>
#define MAX_SIZE 100
void average(int *arr, int n, float *result) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    *result = (float)sum / n;
}
int main() {
    int arr[MAX_SIZE];
    int n;
    float avg;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    average(arr, n, &avg);
    printf("Gia tri trung binh cua mang la: %.2f\n", avg);

    return 0;
}