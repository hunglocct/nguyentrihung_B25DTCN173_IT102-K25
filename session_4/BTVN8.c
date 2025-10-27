#include <stdio.h>
int main (){
	int num1,num2,num3;
	printf("nhap canh 1 ");
	scanf("%d",&num1);
	printf("nhap canh 2 ");
	scanf("%d",&num2);
	printf("nhap canh 3 ");
	scanf("%d",&num3);
	int check1= num1 + num2,
		check2= num2 + num3,
		check3= num1 + num3;
		
	if ((check1 > num3 && check2 > num1 && check3 > num2)){
		printf("no tam giac");
	}else{
		printf("khong phai la tam giac");
	}
	
	
	return 0;
}
