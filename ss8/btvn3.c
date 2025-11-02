#include<stdio.h>
int main (){
	int i,cu=0, aray[5]={1,2,3,4,5};
	
		for(i=0;i<5;i++){
		if (aray[i]%2==0){
		printf("phan tu chan trong mang aray[%d]: %d \n",i,aray[i]);
		cu=1;
	}}
	if(cu==0){
		printf("mang khong co so chan");
	}
	
	return 0;
}
