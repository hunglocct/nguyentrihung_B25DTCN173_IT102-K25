#include<stdio.h>
int main (){
	float a , b , res;
	char spe;
	printf("nhap a:");
	scanf("%f",&a);
	printf("nhap b:");
	scanf("%f",&b);
	printf("nhap toan tu");
	scanf("%s",&spe);
	if ( spe =='+'|| spe == '-'||spe == '*' || spe == '/'){
	printf("");
	}else {
		printf("toan tu loi");
		return 0;
	}
	switch (spe){
	case ('+'): res = a + b;
	break;
	case ('-'): res = a-b;
	break;
	case('*'): res = a*b;
	break;
	case ('/'): res = a/b;
	}
	printf("ket qua phep tinh:%.2f",res);
	return 0;
}
