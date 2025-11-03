#include "stdio.h"
int main (){
	int i,j=0,k=0,n;
	printf("nhap kich co mang");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf(" nhap phan tu %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("so chan trong mang");
	for (i=0;i<n;i++){
		if(arr[i]%2==0){
			j++;
		printf(" %d ",arr[i]);
		}
		
	}
	printf("\nso le trong mang");
	for (i=0;i<n;i++){
		if(arr[i]%2!=0){
			k++;
		printf(" %d ",arr[i]);
		}
		
	}
	printf("\ntong so chan trong mang:%d \n",j);
	printf("tong so le trong mang:%d \n",k);	
	
	
	
	return 0;
}
