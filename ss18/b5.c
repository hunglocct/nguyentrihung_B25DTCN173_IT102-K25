#include"stdio.h"
void updateElement(int *arr, int pos, int val) {
    arr[pos] = val;
}
int main () {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos, val;

    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can cap nhat (0..%d) va gia tri moi: ", size - 1);
    scanf("%d %d", &pos, &val);

    if (pos < 0 || pos >= size) {
        printf("Vi tri khong hop le.\n");
    } else {
        updateElement(arr, pos, val);
        printf("Mang sau khi cap nhat: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}