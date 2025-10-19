#include <stdio.h>

int main() {
    int number = 12345; 
    int d1, d2, d3, d4, d5;
    d5 = number % 10;          
    d4 = (number / 10) % 10;  
    d3 = (number / 100) % 10; 
    d2 = (number / 1000) % 10; 
    d1 = number / 10000;  
    printf("so new la: %d%d%d%d%d",d5,d4,d3,d2,d1);

    return 0;
}
