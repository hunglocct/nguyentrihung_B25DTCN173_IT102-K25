#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[100] = "Hello my gmail is test123@gmail.com"; 
    int letters = 0, digits = 0, special = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            letters++;          
        } else if (isdigit(str[i])) {
            digits++;         
        } else if (str[i] != ' ') {
            special++;       
        }
    }

    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}

