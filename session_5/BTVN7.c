#include<stdio.h>
int main (){
	char letter;
	char convert;
	printf("nhap chu cai: ");
	scanf("%c",&letter);
	if(letter>='a' && letter <='z'){
		convert = letter -32;
	}else if (letter>='A' && letter <='Z'){
		convert = letter +32;
	}else {
		printf("nhap sai chu roi");
		return 0;
	}
	printf("chuyen doi chu: %c",convert);
	
	return 0;
}
