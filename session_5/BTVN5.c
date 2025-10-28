#include<stdio.h>
int main(){
	int age,bus,money;
	bus = 20000;
	printf("nhap tuoi cua ban: ");
	scanf("%d",&age);
	if (age>=60&&age <100){
		money= bus*0.7;
	}else if(age>=19&&age<60){
		money= bus;
	}else if (age>=6&&age<19){
		money= bus*0.5;
	}else if (age > 0&&age<6){
		money = bus * 0;
	}else {
		printf("ban khong phai loai nguoi");
		return 0;
	}
	printf("so tien phai tra %d dong",money);
	
	
	
	return 0;
}
