#include "stdio.h"
void deleteElement(int *arr, int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int main () {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can xoa (0..%d): ", size - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le.\n");
    } else {
        deleteElement(arr, &size, pos);
        printf("Mang sau khi xoa: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}