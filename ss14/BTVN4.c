#include <stdio.h>

void inRa(int arr[], int n);

int main() {
    int n, i;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Cac phan tu trong mang la:");
    inRa(arr, n); 

    return 0;
}

void inRa(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

