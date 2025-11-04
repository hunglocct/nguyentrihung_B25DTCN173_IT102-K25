#include <stdio.h>
int main () {
	int i,j,k,n,flag=-1,cu=0;
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
			cu++;
			if(arr[i]!=flag){
			
			printf("tim thay %d o vi tri %d",arr[i],i);
			flag=arr[i];
		}
		}
	}
		if(cu!=0){
			printf(" so la xuat hien %d",cu);
		}
	
	
	
	return 0;
}
