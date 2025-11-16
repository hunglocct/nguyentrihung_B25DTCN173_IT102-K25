#include "stdio.h"
#include "string.h"
#include <ctype.h>


























































int main (){
	int flag=1,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
	int i;
	char pas[100],use[100];
	do {
	flag = 1;
    flag1 = flag2 = flag3 = flag4 = 0;
	printf("________MENU DANG NHAP________\n");
	printf("Nhap ten dang nhap: ");
	fgets(use,sizeof(use),stdin);
	use[strcspn(use,"\n")]='\0';

	printf("Tao mat khau moi: ");
	fgets(pas,sizeof(pas),stdin);
	pas[strcspn(pas,"\n")]='\0';
	int leg = strlen(pas);
	if(leg<8){
		printf("nhap lai mat khau \n");
		flag=0;
	}
	if(flag==1){
		printf("check 0 ok\n");
	}
	for(i=0;i<leg;i++){
		if(isupper(pas[i])){
			flag1=1;
			break;
		}
	}
	if(flag1==1){
		printf("check 1 ok\n");
	}	
	for(i=0;i<leg;i++){
		if(islower(pas[i])){
			flag2=1;
			break;
		}
	}
	if(flag2==1){
		printf("check 2 ok\n");
	}		
	for(i=0;i<leg;i++){
		if(isdigit(pas[i])){
			flag3=1;
			break;
		}	
	}
	if(flag3==1){
		printf("check 3 ok\n");
	}
	for(i=0;i<leg;i++){
		if(ispunct(pas[i])){
			flag4=1;
			break;
		}	
	}
	if(flag4==1){
		printf("check 4 ok\n");
	}
	if(flag==1 && flag1==1 && flag2==1 && flag3==1 && flag4==1){
        printf("\nMat khau ok");
		printf("\nlogin thanh cong\n");
        flag5 = 1;
    } else {
        printf(" \n Sai\n");
    }		
	}
	while(flag5!=1);
	
	
	
	
	
	return 0;
}
