#include <stdio.h>
int main (){
	int i,j,k,n,m,h,o,g,l,flag=0,sum=0,flag2=0,flag3=0;
	int x, left, right, mid, found = 0;
	int arr[100];
	int max=0,min=999999,kq;
	do{
		printf("\n_________QUAN LY DANH SACH SO NGUYEN_________\n");
		printf("1.Nhap phan tu gia tri cho mang\n");
		printf("2.Hien thi mang\n");
		printf("3.Tinh tong cac phan tu trong mang\n");
		printf("4.Them phan tu vi tri bat ki\n");
		printf("5.Xoa phan tu vi tri bat ki\n");
		printf("6.Cap nhat tai vi tri bat ki\n");
		printf("7.Tim kiem phan tu trong mang\n");
		printf("8.Tim kiem phan tu bang phuong pha nhi phan \n");
		printf("9.Sap sep mang tang dan\n");
		printf("10.Sap sep mang giam dan\n");
		printf("11.Tinh hieu so lon nhat va nho nhat trong mang\n");
		printf("12.thoat chuong trinh\n");
		scanf("%d",&n);
		switch(n){
		case 1:printf("Moi ban nhap so luong phan tu");
				scanf("%d",&k);
				arr[k];
				for(i=0;i<k;i++){
				printf("nhap phan tu so %d ",i);
				scanf("%d",&arr[i]);
				flag=1;	
			}
				break;
		case 2: if(flag==1){
			for(i=0;i<k;i++){
				printf(" %d \n",arr[i]);
		}
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}

			break;
		case 3: if(flag==1){
			for(i=0;i<k;i++){
				sum=sum+arr[i];
				
		}
		printf("tong cac phan tu %d \n",sum);
		
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
				
		} break;	
		

		case 4: if(flag==1){
			printf("nhap vi tri muon them");
			scanf("%d",&h);
			printf("nhap gia tri muon them");
			scanf("%d",&o);
			for(i=k;i>h;i--){
				arr[i]=arr[i-1];
			}
			arr[h]=o;
			k=k+1;
				break;
		
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}	
		case 5: if(flag==1){
			printf("nhap vi tri muon xoa ");
			scanf("%d",&h);
			for (i=h;i<k;i++){
						arr[i]=arr[i+1];
					}
					k=k-1;
			printf("da xoa");
					break;
		
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}	
		case 6: if(flag==1){
			printf("nhap vi tri muon update ");
			scanf("%d",&h);
			printf("nhap gia tri muon update ");
			scanf("%d",&o);
			arr[h]=o;
					}
					else {
			printf("vui long nhap so phan tu truoc \n");
			break;}
					
					break;
		case 7: if(flag==1){
			printf("nhap phan tu muon tim kiem ");
			scanf("%d",&h);
				for(i=0;i<k;i++){
					if(arr[i]==k){
					
				printf("tim thay so %d o vi tri %d \n",arr[i],i);
				flag2=1;
				
				}		
		} 	if(flag2==0){
					printf("khong tim thay");
				}
			
					}
			else {
			printf("vui long nhap so phan tu truoc \n");
			break;}
			
					break;
			case 8:	
		if(flag==1){
			if(flag3==1){
			
			printf("nhap gia tri can tim: ");
				    scanf("%d", &x);
				    left = 0, right = k - 1;
					while (left <= right) {
				        mid = (left + right) / 2;
				        if (arr[mid] == x) {
				            printf("Tim thay %d tai vi tri %d \n", x, mid);
				            found = 1;
				            break;
				        } else if (arr[mid] < x) {
				            left = mid + 1;
				        } else {
				            right = mid - 1;
				        }
				    }if (!found)
				        printf("khong tim thay %d trong mang.\n", x);
					}else{printf("vui long sap sep mang theo tang dan truoc \n");
					}
				
				    
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}

			break;
		case 9:	
		if(flag==1){
			for (i = 0; i < k - 1; i++) {
	        	for (j = 0; j < k - i - 1; j++) {  
	            if (arr[j] > arr[j + 1]) {
	                g = arr[j];
	                arr[j] = arr[j + 1];
	                arr[j + 1] = g;
			}
		}
		}
		 printf("da sap sep \n");
		 flag3=1;
		 
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}

			break;
		case 10: if(flag==1){
                    for (i = 0; i < k - 1; i++) {
                        for (j = 0; j < k - i - 1; j++) {
                            if (arr[j] < arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
		 printf("da sap sep giam dan /n");
		 flag3=0;
		} else {
			printf("vui long nhap so phan tu truoc \n");
			break;
		}

			break;
		case 11: if(flag==1){
			sum=0;
				for(i=0;i<k;i++){
					if(arr[i]>max){
						max=arr[i];
					}
					}
					for(i=0;i<k;i++){
					if(arr[i]<min){
						min=arr[i];			
		}
		} 	
			}else {
			printf("vui long nhap so phan tu truoc \n");
			break;}
			printf("so lon nhat %d \n",max);
					printf("so nho nhat %d \n",min);
					kq = max - min;
					printf("hieu %d \n",kq);
					break;
		case 12: printf("bYe");
		default: printf("nhap NGU \n");
		
			}
		
	}while(n!=12);
	
	
	
	return 0;
}
