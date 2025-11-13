#include "stdio.h"
#include "string.h"
int main (){
	char chuoi[100];
	printf("nhap chuoi ki tu: ");;
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi,"\n")]='\0';
	int leg = strlen(chuoi);
	int i;
	 for(int i = 0; i<leg/2; i++){
        char tg = chuoi[i];
        chuoi[i] = chuoi[leg-i-1];
        chuoi[leg-i-1] = tg;
    }
	printf("chuoi cua ban %s\n",chuoi);

	
	
	return 0;
}
