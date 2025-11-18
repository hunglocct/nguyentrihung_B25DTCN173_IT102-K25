#include <stdio.h>
#define MAX_SIZE 100
void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}
int main() {
    int arrA[MAX_SIZE], arrB[MAX_SIZE];
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cho mang A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    copyArray(arrA, arrB, n);

    printf("Mang B sau khi sao chep tu mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrB[i]);
    }
    printf("\n");

    return 0;
}