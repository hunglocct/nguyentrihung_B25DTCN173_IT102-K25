#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "bcdac";   
    char chars[100];           
    int count[100];          
    int n = strlen(str);
    int k = 0;              

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (str[i] == chars[j]) {
                count[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            chars[k] = str[i];
            count[k] = 1;
            k++;
        }
    }

 
    for (int i = 0; i < k; i++) {
        printf("%c: %d\n", chars[i], count[i]);
    }

    return 0;
}

