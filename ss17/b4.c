#include <stdio.h>
#include <string.h>
int main (){
    char str[100];
    char ch;
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Nhap vao ky tu can xoa: ");
    scanf("%c", &ch);

    int len = strlen(str);
    char result[100];
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, result);
    return 0;
}