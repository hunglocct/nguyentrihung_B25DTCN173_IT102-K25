#include <stdio.h>

int main() {
    int arr[6] = {25, 10, 5, 40, 15, 30};
    int i, j, temp;

    printf("Mang ban dau: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 6 - 1; i++) {
        for (j = 0; j < 6 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nMang sau khi sap xep tang dan: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

