#include<stdio.h> 
#include<math.h>
int main (){
	int a , b , n ; 
	printf("nhap n "); 
	scanf("%d",&n);
	for(a=0 ; a*a*a <= n ; a++){
	for(b=0;b*b*b <=n ;b++){ 
	if((a*a*a)+(b*b*b)==n){ 	
	printf("%d,%d",a,b);		 
	}			
	}
			
	}
		
	return 0 ; 
}
