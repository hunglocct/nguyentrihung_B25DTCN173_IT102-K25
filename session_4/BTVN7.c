#include <stdio.h>
int main (){
	int year;
	printf("nhap nam: ");
	scanf("%d",&year);
	int check1 = year %4,
		check2 = year %100,
		check3 = year %400;
	if ((check1 ==0 && check2!=0)||(check3 == 0)){
		printf("nam %d nhuan", year);
	}else {
		printf("nam %d khong nhuan",year);
	}
	
	
	
	return 0;
}
