#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100] = "hello world";  
    int len = strlen(str);

    if (len > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < len; i++) {
        if (str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("Chuoi sau khi viet hoa chu cai dau: %s\n", str);

    return 0;
}

