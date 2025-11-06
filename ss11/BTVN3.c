#include <stdio.h>
	int main(){
	int arr[5]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	int n,i,j;
	int right, left, mid, cu;
	printf("nhap gia tri can tim");
	scanf("%d",&n);
	left=0 , right = size -1 ;
	while(left<=right){
		mid = (left+right)/2;
		if(arr[mid]==n){
			printf("tim thay %d o vi tri %d",arr[mid],mid);
			break;
			cu=1;
		}else if (arr[mid] < n){
			left = mid +1;
			
		}else if (arr[mid] > n){
			right = right - 1;
		}
		
		
	}
	if (cu==0){
		printf("khong tim thay");
	}
	




	return 0;
}
