#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][50] = {"cho","meo","lon","ga","trau","bo"}; 
    char search[50];
    int i, found = 0;

    printf("Nhap con vat can tim: ");
    gets(search);


    for(i = 0; i < 5; i++) {
        if(strcmp(arr[i], search) == 0) {
            found = 1;
            printf("Tim thay '%s' tai vi tri thu %d trong mang.\n", search, i);
            break;
        }
    }

    if(!found) {
        printf("Khong tim thay '%s' trong mang.\n", search);
    }

    return 0;
}

