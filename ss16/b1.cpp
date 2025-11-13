#include "stdio.h"
#include "string.h"

int main (){
	char chuoi[100];
	printf("nhap chuoi ki tu");;
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	int leg = strlen(chuoi);

	printf("chuoi cua ban %s\n",chuoi);
	printf("do dai chuoi cua ban %d",leg);

	
	
	return 0;
}
