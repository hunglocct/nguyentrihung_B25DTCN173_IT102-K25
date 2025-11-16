#include <stdio.h>
#include <string.h>
int main (){
    char str[200];
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int maxLen = 0;
    char longestWord[100] = "";
    char currentWord[100];
    int i = 0, j = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[j++] = str[i];
        } else {
            if (j > 0) {
                currentWord[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longestWord, currentWord);
                }
                j = 0;
            }
            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }

    printf("Tu dai nhat: %s\n", longestWord);
    printf("Do dai: %d\n", maxLen);
    return 0;
}