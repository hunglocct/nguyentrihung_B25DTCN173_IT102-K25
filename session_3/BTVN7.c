#include <stdio.h>
int main (){
	int num;
	printf("moi nhap so co 4 chu so:");
	scanf("%d",&num);
	int d1 = num%10;
	int d2 = (num / 10)%10;
	int d3 = (num / 100)%10;
	int d4 = (num / 1000);
	int sum = (d1 + d2 + d3 + d4);
	printf ("tong 4 so: %d",sum);
	return 0;
}
