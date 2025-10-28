#include <stdio.h>
int main (){
	float point;
	printf("moi nhap diem: ");
	scanf("%f",&point);
	if (point >= 8&& point <=10){
		printf("hoc luc gioi");
	}else if(point >=6.5&& point<8) {
		printf("hoc luc kha");
	}else if (point >=5&&point<6){
		printf("hoc luc trung binh");
	} else if (point>=0&& point<5){
		printf("hoc luc yeu");
	} else{
		printf("loi du lieu");
	}
	
	return 0;
}
