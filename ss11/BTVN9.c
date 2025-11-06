#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 3, 9, 5, 2, 8, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k;

    printf("Mang ban dau: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }

    printf("\nMang sau khi loai bo trung lap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

