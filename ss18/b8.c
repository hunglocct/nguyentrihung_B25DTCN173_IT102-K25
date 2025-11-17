#include "stdio.h"
#include "string.h"
void reverseString(char *input, char *reverse) {
    int len = strlen(input);
    for (int i = 0; i < len; i++) {
        *(reverse + i) = *(input + len - 1 - i);
    }
    *(reverse + len) = '\0'; 
}
int main () {
    char inputString[100], reverseStringArr[100];

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;

    reverseString(inputString, reverseStringArr);

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseStringArr);

    return 0;
}