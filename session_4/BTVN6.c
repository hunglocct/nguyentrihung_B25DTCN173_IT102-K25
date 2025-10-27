#include <stdio.h>
int main (){
	int newn,oldn;
	printf("nhap so dien cu: ");
	scanf("%d",&oldn);
	printf("nhap so dien moi: ");
	scanf("%d",&newn);
	int kw = newn - oldn;
	printf ("Dien ban dung trong thang %d \n",kw);
	long tien;
	if (kw < 0) {
        printf("So dien khong hop le!\n");
        return 0;
    }

    if (kw < 50) {
        tien = kw * 10000;
    } 
    else if (kw < 100) {
        tien = kw * 15000;
    } 
    else if (kw < 150) {
        tien = kw * 20000;
    } 
    else if (kw < 200) {
        tien = kw * 25000;
    } 
    else {
        tien = kw * 30000;
    }
	printf("so tien phai tra: %d dong",tien);
	
	
	return 0;
}
