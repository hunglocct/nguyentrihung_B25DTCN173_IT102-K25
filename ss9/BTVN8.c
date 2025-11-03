#include <stdio.h>
#include <math.h>
int main () {
	int i,j,k,n;
	printf("nhap kich co mang");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf(" nhap phan tu %d ",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		printf(" %d",arr[i]);}
	printf("\ncac so nguyen to trong mang");
	
 for (i = 0; i < n; i++) {
        if (arr[i] <= 2)
            continue; 

        k = 1;
        for (j = 2; j <= sqrt(arr[i]); j++) {
            if (arr[i] % j == 0) {
                k = 0; 
                break;
            }
        }

        if (k == 1) {
            printf(" %d", arr[i]);
        }
    }
	
	
	return 0;
}
