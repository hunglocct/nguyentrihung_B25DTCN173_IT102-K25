#include "stdio.h"
int tong(int a,int b){
	int i;
	int sum, res;
	for (i=0;i<b;i++){
		res=a%10;
		sum+=res;
		a/=10;		
	} return sum;
}
int main(){
	int i;
	int sum, res;
	int a= 12345;
	sum = tong(a,5);
	printf("%d",sum);
	
	
	
	return 0;
}
