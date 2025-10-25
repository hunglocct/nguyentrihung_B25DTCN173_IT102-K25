#include <stdio.h>
#include <math.h>
int main (){
	int a,b;
	double S;
	printf("moi nhap a = ");
	scanf("%d",&a);
	printf("moi nhap b = ");
	scanf("%d",&b);
	S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(a * a + b * b));
	printf("S la:%.2f",S);
	
	
	
	return 0;
}
