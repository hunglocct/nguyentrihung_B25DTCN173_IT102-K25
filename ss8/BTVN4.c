#include <stdio.h>
int main (){
	int n,i ,sum, aray[1000];
	printf("nhap so luong phan tu:");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("moi ban nhap aray(%d)",i);
		scanf("%d",&aray[i]);
	}
	for (i=0;i<n;i++){
		printf("aray[%d]= %d \n",i,aray[i]);
	}
		

	
	return 0;
}
