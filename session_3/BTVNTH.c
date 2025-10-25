#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	double S;
	printf("moi nhap a = ");
	scanf("%d",&a);
	printf("moi nhap b = ");
	scanf("%d",&b);
	S = sqrt(a*a + b*b) / (a + b) + (sqrt(a) + sqrt(b)) / (a * b);
	printf("S la:%.2f",S);
	
	
	
	return 0;
}
