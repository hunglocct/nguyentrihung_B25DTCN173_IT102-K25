#include <stdio.h>
int main () {
	int i,j,k,n;
	
	printf("nhap kich co mang");
	scanf("%d",&n);
	int arr[n];
	int ary[n];
	int len = sizeof(arr)/sizeof(int);
	for (i=0;i<n;i++){
		printf(" nhap phan tu %d ",i);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		printf(" %d",arr[i]);}
	for (i=0;i<n;i++){
		ary[i]=arr[len-1-i];
	}printf(" dao nguoc mang");
		for (i=0;i<n;i++){
		printf(" %d",ary[i]);}
	
	
	return 0;
}
