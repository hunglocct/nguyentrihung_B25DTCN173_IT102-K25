#include "stdio.h"
#include "string.h"45

struct Sinhvien{
	char name[50];
	int age;
	char num[12];
};


int main(){
	struct Sinhvien Sv[50];
	int n,i;
	printf("Nhap vao so sinh vien: ");
	scanf("%d",&n);
    getchar();

  	for(i = 0; i < n; i++){
        printf("Nhap ten sv %d: ",i);
        fgets(Sv[i].name , 50, stdin);
        Sv[i].name[strcspn(Sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi sv%d: ",i);
        scanf("%d", &Sv[i].age);
        getchar();

        printf("Nhap phone sv%d: ",i);
        fgets(Sv[i].num, 13, stdin);
        Sv[i].num[strcspn(Sv[i].num, "\n")] = '\0';
    }
     printf("_______________________________________\n");
       printf("||Ten sv || Tuoi sv || SDDt ||\n");
		for(i = 0; i < n; i++){
       printf("_______________________________________\n");
       printf("||%s || %d || %s ||\n",Sv[i].name,Sv[i].age,Sv[i].num);
    }

	
	
	
	return 0;
}
