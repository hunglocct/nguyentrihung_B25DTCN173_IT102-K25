#include <stdio.h>
int main (){
	int m3,fact;
	printf("nhap so khoi nuoc: ");
	scanf("%d",&m3);
	if(m3>=0 && m3<11){
		fact = 6000*m3;
	}else if (m3 >=11 && m3 < 21){
		fact = 7000*(m3-10)+10*6000;
	}else if (m3 >=21 && m3<30){
		fact = 8500*(m3-20)+10*7000+10*6000;
	}else if (m3>=30){
		fact  = 10000*(m3-30)+10*10+10*7000+10*6000;
	}else {
		printf("ban ban nuoc cho nha may a");
		return 0;
	}
	printf("so tien ban phai tra la %d VND",fact);
	
	
	
	return 0;
}
