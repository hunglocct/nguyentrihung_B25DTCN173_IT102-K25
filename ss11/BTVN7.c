#include <stdio.h>

int main() {
    int arr[] = {100, 90, 80, 110, 120};  
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n < 2) {
        printf("Loi: Can it nhat 2 thang de tinh toan.\n");
        return 0;
    }

    int buyPrice = arr[0]; 
    int minLoss = 0;      
    int bestMonth = 1;     
    int i, profitLoss;

    minLoss = arr[1] - buyPrice;
    bestMonth = 2; 

    for (i = 2; i <= n; i++) {
        profitLoss = arr[i - 1] - buyPrice; 
        if (profitLoss < minLoss) {
            minLoss = profitLoss;
            bestMonth = i;
        }
    }

    printf("Gia mua vao: %d\n", buyPrice);
    printf("Thang ban tot nhat: %d\n", bestMonth);
    
    if (minLoss >= 0)
        printf("Ban co lai %d.\n", minLoss);
    else
        printf("Ban lo it nhat: %d.\n", -minLoss);

    return 0;
}

