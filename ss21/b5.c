#include "stdio.h"
#include "string.h"
struct Product {
    char name[50];
    float price;
    int quantity;
};
int main() {
    struct Product products[5];
    float totalValue = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho san pham thu %d:\n", i + 1);

        printf("Nhap ten san pham: ");
        fgets(products[i].name, 50, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0';

        printf("Nhap gia san pham: ");
        scanf("%f", &products[i].price);

        printf("Nhap so luong san pham: ");
        scanf("%d", &products[i].quantity);
        getchar(); 

        totalValue += products[i].price * products[i].quantity;
    }

    printf("\nTong gia tri cua tat ca cac san pham: %.2f\n", totalValue);

    return 0;
}