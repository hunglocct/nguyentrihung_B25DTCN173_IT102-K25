#include <stdio.h>

int main() {
    int i, j, k = 99999, n;
    int x, left, right, mid, found = 0;

    printf("Nhap kich co mang: ");
    scanf("%d", &n);

    int arr[n];


    for (i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }


    printf("\nMang ban dau: ");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    
    printf("\nMang da sap xep tang dan: ");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
	//tim nho nhat
    for (i = 0; i < n; i++) {
        if (arr[i] < k) {
            k = arr[i];
        }
    }
    printf("\nSo nho nhat trong mang: %d", k);

	//tim nhi phan
    printf("\n\nNhap gia tri can tim: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;
    found = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay %d tai vi tri %d", x, mid);
            found = 1;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found)
        printf("Khong tim thay %d trong mang.\n", x);

    return 0;
}

