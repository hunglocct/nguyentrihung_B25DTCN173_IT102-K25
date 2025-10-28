#include <stdio.h>
int main (){
	int kw,level;
	float money,mon;
	printf("nhap so kWh dien: ");
	scanf("%d",&kw);
	printf("nhap loai ho tieu dung: ");
	scanf("%d",&level);
	if (kw >= 200) {
        mon = kw * 3000;
    } else if (kw >= 101) {
        mon = kw * 2500;
    } else if (kw >= 51) {
        mon = kw * 2000;
    } else {
        mon = kw * 1500;
    }
	if (level == 1){
		money=mon*1.05;
	}else if (level ==2){
		money=mon*1.1;
	}else if (level ==3){
		money=mon*1.08;
	}else {
		printf("khong ton tai he so");
		return 0;
	}
	printf("so tien dien phai tra %.0f VND ",money);
	return 0;
}
