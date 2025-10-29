#include <stdio.h>
int main () {
	int num,level=1,levell,bcc;
	for (num = 1; num <= 9; num++) {
        printf("bang cuu chuong %d \n", num);

        for (level = 1; level <= 10; level++) {
            printf("%d * %d = %d\n", num, level, num * level);
        }
    }	
	
		


	
	return 0;
}

