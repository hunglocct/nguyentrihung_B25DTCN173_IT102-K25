#include "stdio.h"
#include "string.h"
int main (){
	char chuoi[100];
	printf("nhap chuoi ki tu: ");;
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	int leg = strlen(chuoi);
	int i;
	for(i=0;i<leg;i++){
		printf("%c ",chuoi[i]);
	}
	
	
	
	return 0;
}
