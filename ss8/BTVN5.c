#include <stdio.h>
int main (){
	int i,j,temp,n,cu=0,nn ,num[100];
	printf("nhap so luong so:");
	scanf("%d",&n);
	
	for (i=0;i<5;i++){
		printf("num[%d]= ",i);
		scanf("%d",&num[i]);
	}
	 for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("\n xawp xep nho den lon \n");
	for (i=0;i<5;i++){
		printf("num[%d]:%d \n",i,num[i]);
	}
	printf("nhap so muon tim kiem o vi tri nao bat ki");
	scanf("%d",&nn);
	for (i=0;i<n;i++){
		if(num[i]==nn){
			printf("so %d o vi tri num[%d] ",num[i],i);
			cu=1;
		}
	}
	if (cu==0){
		printf("khong co so ban tim");
	}
	
	return 0;
}
