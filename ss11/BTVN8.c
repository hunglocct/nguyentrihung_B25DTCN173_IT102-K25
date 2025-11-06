#include <stdio.h>

int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 2, 3, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, count, maxCount = 0, mostFreq;

    for (i = 0; i < n; i++) {
        count = 1; 
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFreq);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}

