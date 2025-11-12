#include"stdio.h"
int summ(int arr[],int b){
	int i,summ=0;
	for(i=0;i<b;i++){
		summ+=arr[i];
	}
	return summ;
}
int main (){
	int arr[]={1,2,4,5,7,9,4};
	int leg=sizeof(arr)/sizeof(int);
	int sum= summ(arr,leg);
	printf("%d",sum);
	
	
	
	return 0;
}
