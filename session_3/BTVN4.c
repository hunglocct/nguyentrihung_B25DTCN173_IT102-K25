#include<stdio.h>
#include<math.h>
int main (){
	float marh,lite,eng;
	printf("vui long nhap diem toan:");
	scanf("%f",&marh);
	printf("vui long nhap diem van:");
	scanf("%f",&lite);
	printf("vui long nhap diem anh:");
	scanf("%f",&eng);
	float ave = (marh + lite + eng)/3;
	float sum = marh + lite + eng;
	printf("tong diem 3 mon la:%.2f\n",sum);
	printf("trung binh diem 3 mon la:%.2f",ave);

	return 0;
}
