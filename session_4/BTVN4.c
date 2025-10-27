#include <stdio.h>
int main (){
	int num;
	printf("moi nhap thang: ");
	scanf("%d",&num);
	if (num == 1 || num == 3 || num ==5  ||num==7 || num == 8 || num == 10 || num == 12){
		printf("Thang co 31 ngay");
	}else if (num==4 || num==6 || num==9 || num==11){
		printf("thang co 30 ngay");
	}else if (num==2){
		printf("thang cos 28 hoac 29 ngay tuy nam");
	}else {
		printf("thang khong hop le");
	}
	
	
	return 0;
}
