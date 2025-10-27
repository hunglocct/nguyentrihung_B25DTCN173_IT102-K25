#include <stdio.h>
int main (){
	int num1,num2,num3;
	printf("nhap so thu nhat ");
	scanf("%d",&num1);
	printf("nhap so thu 2 ");
	scanf("%d",&num2);
	printf("nhap so thu 3 ");
	scanf("%d",&num3);
	if ((num2 > num1 && num2 < num3)||(num2 < num1 && num2 > num3)){
		printf("so thu 2 nam trong khoang so thu nhat va so thu 3");
	}else{
		printf("so thu 2 trong nawm trong khoang so thu nhat va so thu 3");
	}
	
	
	return 0;
}
