#include <stdio.h>
int main () {
	char name[50];
	printf("Xin chao! Ban ten la gi? \n");
   
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Chao %s!\n", name);
	
	
	return 0;
}
