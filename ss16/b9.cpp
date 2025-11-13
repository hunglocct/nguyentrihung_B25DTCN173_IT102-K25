#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello world"; 
    char ch;
    
    printf("Chuoi hien tai: %s\n", str);
    printf("Nhap mot ky tu can xoa: ");
    scanf("%c", &ch);

    int len = strlen(str);
    int k = 0;  

    for (int i = 0; i < len; i++) {
        if (str[i] != ch) { 
            str[k] = str[i];
            k++;
        }
    }

    str[k] = '\0'; 

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}

