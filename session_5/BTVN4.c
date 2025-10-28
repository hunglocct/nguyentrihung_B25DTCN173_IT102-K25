#include <stdio.h>
int main (){
	float wage;
	float tax,taxx;
	printf("nhap luong cua ban don vi trieu: ");
	scanf("%f",&wage);
	if (wage > 10.0){
		tax = wage*0.15;
	}else if(wage>5.0){
		tax = wage*0.10;
	}else if(wage<5.0&&wage>0.0){
		tax = wage*0.05;
	}else{
		printf("ban an bam xa hoi");
		return 0;
	}
	
	taxx = tax*1000000 ;
	printf("so tien dong thue la %.0f dong",taxx);
	return 0;
}
