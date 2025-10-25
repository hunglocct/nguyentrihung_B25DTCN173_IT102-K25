#include <stdio.h>
int main (){
	float height,bottom;
	
	printf("nhap chieu cao tam giac: ");
	scanf("%f",&height);
	
	printf("nhap canh day tam giac:	");
	scanf("%f",&bottom);
	
	float area = (height*bottom)/2;
	
	printf("dien tich tam giac la: %.2f",area);
	return 0;
}
