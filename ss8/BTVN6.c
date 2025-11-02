#include <stdio.h>
int main (){
	int i,j, arry[5] = {1,2,3,4,5};
	for (i=0;i<5;i++){
		if(arry[i]%2==0)
		arry[i]=arry[i]+3;
	}
	for (i=0;i<5;i++){
		if(arry[i]%2 != 0)
		arry[i]=arry[i]+2;
	}
	for (i=0;i<5;i++){
		printf(" %d ",arry[i]);
	}
	
	return 0;
}
