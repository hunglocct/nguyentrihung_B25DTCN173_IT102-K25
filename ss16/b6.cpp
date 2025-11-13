#include <stdio.h>
#include <string.h>
#include <ctype.h>  

int main() {
    char str[100] = "Hello World 123!";  
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {  
            count++;
        }
    }

    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai trong chuoi: %d\n", count);

    return 0;
}

