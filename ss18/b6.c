#include "stdio.h"
int findElement(int *arr, int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            return i; 
        }
    }
    return -1; 
}
int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val, position;

    printf("Nhap gia tri can tim: ");
    scanf("%d", &val);

    position = findElement(arr, size, val);
    if (position != -1) {
        printf("Phan tu %d duoc tim thay o vi tri: %d\n", val, position);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", val);
    }

    return 0;
}