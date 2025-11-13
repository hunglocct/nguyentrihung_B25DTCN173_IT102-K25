#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "nguyentrihung";   
    char ch;                      
    int count = 0;                
    int len = strlen(str);

    printf("Chuoi hien tai: %s\n", str);
    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch);

    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);

    return 0;
}

