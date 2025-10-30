#include<stdio.h>
int main () { 
int a , b , i , j , prime  ; 

printf("nhap a:"); 
scanf("%d",&a); 
printf("nhap b:"); 
scanf("%d",&b); 

for(i=a;  i<=b ; i++){  
	if(i<2) continue; 
		prime = 1;
	for(j=2; j*j<=i; j ++){ 
		if(i%j==0){
		prime = 0 ; 
		break ; 
		}
	}
	if(prime)
	printf("so nguyen to:%d\n",i); 

}


return 0 ; 
}
