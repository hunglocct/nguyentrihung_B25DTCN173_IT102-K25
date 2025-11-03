#include "stdio.h"
int main (){
	int i,j=0,k,n,flag;
	printf("nhap kich co mang");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf(" nhap phan tu %d ",i);
		scanf("%d",&arr[i]);
	}
		printf("Nhap gia tri can tim: ");
	    scanf("%d", &k);
		flag = 0;
				
		for (i = 0; i < n; i++) {
		if (arr[i] == k) {
		printf("Tim thay phan tu %d tai vi tri %d\n", arr[i], i);
			flag = 1; 
		}
		}
				
		if (flag == 0) {
		printf("Khong tim thay gia tri\n");
		}	
	
	
	return 0;
}
