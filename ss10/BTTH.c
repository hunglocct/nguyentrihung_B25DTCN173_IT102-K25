#include <stdio.h>
int main (){
	int i,j,k,n;
	int arr[100];
	int flag=0,cu=0;
	int len = sizeof(arr)/sizeof(int);
	do{ printf("MENU VIPPRO \n");
		printf("1. Them phan tu vao vi tri bat ki \n");
		printf("2. Xoa phan tu o vi tri bat ki \n");
		printf("3. Cap nhat gia tri tai vi tri bat ki \n");
		printf("4. Tim kiem phan tu trong mang \n");
		printf("5. Hien thi mang \n");
		printf("6. Sap sep phan tu trong mang \n");
		printf("7. Thoat chuong trinh");
		scanf("%d",&n);
		switch(n){
			case 1:printf("moi nhap vi tri can them");
			scanf("%d",j);
			printf("moi nhap gia tri");
			scanf("%d",k);
			for(i=len;i>j;i--){
				arr[i]=arr[i-1];
			}
			arr[j]=k;
			cu=1;
				break;
			case 2: printf("moi nhap vi tri can xoa ");
					scanf("%d",&j);
					for (i=j;i<len;i++){
						arr[i]=arr[i+1];
					}
					cu=1;
				break;
			case 3: printf("Moi nhap vi tri can update");
					scanf("%d",&j);
					printf("moi nhap gia tri");
					scanf("%d",&k);
					arr[j]=k;
					cu=1;
			case 4:
				    printf("Nhap gia tri can tim: ");
				    scanf("%d", &k);
				
				    flag = 0;
				
				    for (i = 0; i < len; i++) {
				        if (arr[i] == k) {
				            printf("Tim thay phan tu %d tai vi tri %d\n", arr[i], i);
				            flag = 1; 
				        }
				    }
				
				    if (flag == 0) {
				        printf("Khong tim thay gia tri\n");
				    }
				
				    break;

			case 5: if(cu==1){
				for(i=0;i<len;i++){
						printf(" %d ",arr[i]);
						}
			}	else{printf(" nhap gia tri da /n");
				}	
					break;
			
			case 6: 	for (i = 0; i < n - 1; i++) {
        	flag = 0;
        	for (j = 0; j < n - i - 1; j++) {  
            if (arr[j] > arr[j + 1]) {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
                flag = 1;
            }
        }
		if(flag==0){
			break;
		}
	};
			case 7: printf("BYE");
			break;
			default: printf("nhap NGU");
			
			
			
		
		}
		
		
		
		
		
	} while(n!=7);
	
	
	return 0;
}
