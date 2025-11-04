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
		printf("\nmang da sap sep\n");

	//choo nay sap sep hoc thuoc vao
	for(i=0;i<n;i++){
		for( j = 0; j < n - i - 1; j++){
			if(arr[j]>arr[j+1]){
				 k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
			}
		}
	}
	
	for (i=0;i<n;i++){
		printf(" %d",arr[i]);}
	
	
	return 0;
}
