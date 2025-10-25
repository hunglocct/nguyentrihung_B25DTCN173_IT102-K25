#include <stdio.h>
#include <math.h>
int main (){
	float r;
	printf("nhap ban kinh:");
	scanf("%f",&r);
	float pe = M_PI*2*r;
	float ac = M_PI*r*r;
	printf("chu vi hinh tron la:%.2f \n",pe);
	printf("dien tich hinh tron la:%.2f",ac);
	return 0;
}
