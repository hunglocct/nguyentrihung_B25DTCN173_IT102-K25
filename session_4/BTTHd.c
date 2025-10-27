#include <stdio.h>
int main () {
	int age;
	float point;
	printf("Moi nhap nam sinh: ");
	scanf("%d",&age);
	int agee = 2025 - age;
	if (agee>=18 && age>1990 && age<2025){
		printf("Ban du tuoi \n");
	}
	else {
		printf("Ban khong du tuoi de su dung dich vu chung toi \n");
		return 0;
	}
	
	printf("Moi nhap diem: ");
	scanf("%f",&point);
	 if (point < 5.0) {
        printf("Xep loai: Yeu\n");
    } else if (point < 6.5) {
        printf("Xep loai: Trung binh\n");
    } else if (point < 8.0) {
        printf("Xep loai: Kha\n");
    } else if(point <10.0){
        printf("Xep loai: Gioi\n");
    } else {
    	printf("diem khong hop le");
	}
	printf(" SV sinh nam %d \n Tuoi SV %d \n Diem SV %.1f",age,agee,point);
	
	
	
	return 0;
}
