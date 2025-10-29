#include <stdio.h>
int main (){
	int n,a=1,sum;
	printf("moi nhap N: ");
	scanf("%d",&n);
	while (a<=n){
	sum +=a; a++;	
	}
	
	printf("tong 1 den n: %d",sum);
	
	
	return 0;
}
