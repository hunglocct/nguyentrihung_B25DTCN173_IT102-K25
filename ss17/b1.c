#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i, flag = 1;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    
    // Loai bo ky tu xuong dong neu co
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }

    return 0;
}