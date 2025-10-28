#include <stdio.h>
int main (){
	float salary, level,reward, sla,allowance;
	int day;
	printf("nhap he so luong: ");
	scanf("%f",&level);
	printf("nhap so ngay cong: ");
	scanf("%d",&day);
	printf("nhap chuc vu: ");
	scanf("%f",&allowance);
	if (day>26){
		reward = (day - 26.0) * 200000.0;
	}else {
		reward = 0.0;
	}
	sla = day * 160000.0 * level  + reward;
	switch ((int)allowance){
		case 1 : salary = sla + 500000.0;
		break;
		case 2 : salary = sla + 10000000.0;
		break;
		case 3 : salary = sla + 20000000.0;
		break;
		default : printf("sai he so roi");
		return 0;
	}
	
	printf("luong cua ban %.0f VND",salary);
	
	return 0;
}
