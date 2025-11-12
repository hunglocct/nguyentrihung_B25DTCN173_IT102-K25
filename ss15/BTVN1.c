#include "stdio.h"
//khai bao ham
int hieu (int a,int b){
	return a-b;
	
}
int tich (int a,int b){
	return a*b;
}
int main (){
	int result,tt;
	 result = hieu(4,2);
	printf("%d",result);
	tt = tich(4,2);
	printf("\n%d",tt);
	
	
	
	return 0;
}

