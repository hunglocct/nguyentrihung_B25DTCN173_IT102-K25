#include <stdio.h>
#define MAX_SIZE 100
void inputArray(int *arr, int *n) {
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", n);
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", arr + i);
    }
}
void printEvenNumbers(int *arr, int n) {
    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void printPrimeNumbers(int *arr, int n) {
    printf("Cac phan tu la so nguyen to trong mang:\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i))) {
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}
void reverseArray(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void sortArray(int *arr, int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && *(arr + i) > *(arr + j)) || 
                (!ascending && *(arr + i) < *(arr + j))) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int searchElement(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[MAX_SIZE];
    int n = 0;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                printEvenNumbers(arr, n);
                break;
            case 3:
                printPrimeNumbers(arr, n);
                break;
            case 4:
                reverseArray(arr, n);
                break;
            case 5: {
                int sortChoice;
                printf("Menu con:\n1. Tang dan\n2. Giam dan\nLua chon cua ban: ");
                scanf("%d", &sortChoice);
                if (sortChoice == 1) {
                    sortArray(arr, n, 1);
                } else if (sortChoice == 2) {
                    sortArray(arr, n, 0);
                } else {
                    printf("Lua chon khong hop le.\n");
                }
                break;
            }
            case 6: {
                int x;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                int index = searchElement(arr, n, x);
                if (index != -1) {
                    printf("Phan tu %d duoc tim thay o vi tri %d.\n", x, index);
                } else {
                    printf("Phan tu %d khong ton tai trong mang.\n", x);
                }
                break;
            }
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
    return 0;
}