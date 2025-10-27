#include <stdio.h>
int main (){
	int num;
	printf("nhap so:");
	scanf("%d",&num);
	int set = num %2;
	if (set==0) {
		printf("so chan");
	}else{
		printf("so le");
	}
	
	
	return 0;
}
