#include "stdio.h"
int sum(int a,int b);
int main (){
	int a=6,b=7;
	int kq = sum(a,b);
	printf("kq %d",kq);
	
	
	
	
	return 0;
}
int sum(int a, int b) {
    return a + b;
}

