#include <stdio.h>
int main (){

	float r, pi=3.14,chuVi,dienTich;
	printf("nhap ban kinh:");
	scanf("%f",&r);
	chuVi = 2*pi *r;
	dienTich = pi * r*r;
	printf("chu vi %.0f dien tich %.0f",chuVi,dienTich);
return 0;
}
