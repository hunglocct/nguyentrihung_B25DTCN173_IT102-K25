#include "stdio.h"
int ress(int a){
	int tmp, ress = 0;
    while(a > 0){
        tmp = a % 10;
        ress = ress * 10 + tmp;
        a = a / 10;
    }
    return ress;		
	} 

int main(){
	int res;
	int a;
	printf("nhap so: ");
	scanf("%d",&a);
	res = ress(a);
	printf("%d",res);
	
	
	
	return 0;
}
