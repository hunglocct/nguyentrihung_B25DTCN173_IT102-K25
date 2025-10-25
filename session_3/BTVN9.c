#include <stdio.h>
int main (){
	int n;
	double A;
	printf("moi nhap n: ");
	scanf("%d",&n);
	 A = 1.0 / ((n - 1) * n)
          + 1.0 / (n * (n + 1))
          + 1.0 / ((n + 1) * (n + 2));
	printf("A la %.2f",A);
	
	return 0;
}
