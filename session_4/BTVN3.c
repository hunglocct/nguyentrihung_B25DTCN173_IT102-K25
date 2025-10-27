#include <stdio.h>
int main (){
	int num;
	printf("moi nhap so: ");
	scanf("%d",&num);
	int check1 = num %15,
		check2 = num %5,
		check3 = num %3;
		if (check1 ==0){
			printf("chia het cho 3 va 5");
		}else if(check2 == 0){
			printf("chia het cho 5");
		}else if(check3==0){
			printf("chia het cho 3");
		}else{
			printf("khong chia het cho 3 va 5");
		}
	
	
	
	return 0;
}
