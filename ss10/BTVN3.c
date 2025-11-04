#include <stdio.h>
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
	printf("\nnhap so can tim");
	scanf("%d",&k);
	
	for(i=0;i<n;i++){
		if(arr[i]==k){
			printf("tim thay %d o vi tri %d",arr[i],i);
			break;
		}
	}
	
	
	
	
	return 0;
}
