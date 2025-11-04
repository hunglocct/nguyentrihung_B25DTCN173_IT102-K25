#include <stdio.h>

int main() {
    int i, j, k, n, m, flag;
    int x, left, right, mid, found = 0;

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    int arr[n]; // giá
    int ary[n]; // id

    for (i = 0; i < n; i++) {
        printf("Nhap ID sp stt %d: ", i);
        scanf("%d", &ary[i]);
        printf("Nhap gia sp stt %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nDanh sach san pham truoc khi sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d\tGia: %d\n", ary[i], arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
        flag = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;

                // dat id
                m = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = m;

                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }

    printf("\nMang da sap xep tang dan theo gia:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d\tGia: %d\n", ary[i], arr[i]);
    }


    return 0;
}

