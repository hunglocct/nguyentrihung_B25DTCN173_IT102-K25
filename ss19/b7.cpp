	#include "stdio.h"
	void nhap(int *arr, int n) {
	    for (int i = 0; i < n; i++) {
	        printf("Nhap phan tu thu %d: ", i);
	        scanf("%d",arr+i );
	    }
	}
	void hien(int *arr,int n){
	    printf("Phan tu va chi so trong mang\n");
	    for(int i=0;i<n;i++){
	    	printf("%d vt %d",*(arr+i),i);
	        printf("\n");
	}
	}
	void hiendai(int *arr,int n){
	    printf("Mang co do dai %d",n);
	    printf("\n");
	
	}
	void sumlai(int *arr,int n,int *sum){
		printf("Tong cac phan tu trong mang\n");
	    for(int i=0;i<n;i++){
	    	*sum+=*(arr+i);
	}	printf("%d\n",*sum);
	}
	void lonnhat(int *arr,int n,int *max){
		printf("Phan tu lon nhat trong mang\n");
		*max =*(arr);
	    for(int i=0;i<n;i++){
	    	
	    	if(*(arr+i)>*max){
	    		*max = *(arr +i);
			}
	}
		printf("%d\n",*max);
	}	
	int main (){
	int chon, array[100],i,n,sum,max;
	int *arr = array ; 
	do{
		printf("\nMENUUU\n");
	    printf("1. Nhap vao so phan tu va phan tu \n");
	    printf("2. Hien thi so phan tu va phan tu \n");
	    printf("3. Tinh do dai cua mang \n");
	    printf("4. Tinh tong cac phan tu trong mang \n");
	    printf("5. Hien thi phan tu lon nhat\n");
	    printf("6. Thoat \n");
	    printf("Nhap lua chon cua ban: ");
	    scanf("%d",&chon);
	    switch (chon)
	    {
	        case 1:
	            printf("nhap so luong phan tu trong mang:");
	            scanf("%d",&n);
	            nhap(arr,n);
	                break;
	        case 2:
	            hien(arr,n);
	            break;    
			case 3:
				hiendai(arr,n);
				break;
			case 4:
				sumlai(arr,n,&sum);
				break;
			case 5:
 				lonnhat(arr, n, &max);
 				break;
 			case 6:
 				printf("GOOOD Boy");
 			default:
 				printf("Nhap sai roi");
	}
	
	}while (chon!=6);
	    return 0;
	}
