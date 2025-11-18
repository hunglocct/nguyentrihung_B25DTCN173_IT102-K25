#include <stdio.h>
#define MAX_SIZE 100
int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cho mang thu nhat:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Nhap cac phan tu cho mang thu hai:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int result = compareArrays(arr1, arr2, n);
    if (result) {
        printf("Hai mang giong nhau.\n");
    } else {
        printf("Hai mang khac nhau.\n");
    }

    return 0;
}