#include "stdio.h"
int main (){
	int i,j,ave,n,sum=0;
	
	printf("nhap kich co mang");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf(" nhap phan tu %d ",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		sum=sum+arr[i];
		
		
		
		
	}
	ave = sum/n;
	printf("trung binh cac phan tu trong mang %d",ave);
	
	
	
	
	
	return 0 ;
}
