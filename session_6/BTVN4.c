#include <stdio.h>
int main () {
	int num,level=1,bcc;
	
	printf("nhap so:");
	scanf("%d",&num);
		
	if (num>10 || num<1){
	printf("nhap sai vui long chay lai chuong trinh"); return 0;
	}
	while (level<=10){
		bcc= level*num;
		level++;
		printf("%d * %d = %d \n",num,level,bcc);
	}
	
	return 0;
}

