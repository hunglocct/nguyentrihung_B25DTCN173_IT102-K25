#include <stdio.h>
int main () {
	int i,j,k,n,pos,value, ary[100];
	printf("Nhap do dai cua mang: ");
	scanf("%d",&k);
	do {printf("QUAN LI DANH SACH \n");
	printf("1. Them phan tu vao vi tri bat ky\n");
    printf("2. Xoa phan tu o vi tri bat ky\n");
    printf("3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("4. Tim kiem phan tu trong mang\n");
    printf("5. Hien thi mang\n");
    printf("6. Thoat\n");
	printf("CHON NHANH LEN!");
	scanf("%d",&n);
		switch (n){
		
	case 1:     printf("Nhap vi tri muon chen (0 -> %d): ", k);
                scanf("%d", &pos);
                if (pos < 0 || pos > k) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri muon chen: ");
                scanf("%d", &value);
                for (i = k; i > pos; i--) {
                    ary[i] = ary[i - 1];
                }
                ary[pos] = value;
                k++;
                printf("Da chen thanh cong!\n");
                break;
	case 2: printf("Nhap vi tri muon xoa (0 -> %d): ", k - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= k) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (i = pos; i < k - 1; i++) {
                    ary[i] = ary[i + 1];
                }
                k--;
                printf("Da xoa thanh cong!\n");
                break;
	case 3:
                printf("Nhap vi tri muon cap nhat (0 -> %d): ", k - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= k) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                ary[pos] = value;
                printf("Da cap nhat!\n");
                break;
	case 4:printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                int found = 0;
                for (i = 0; i < k; i++) {
                    if (ary[i] == value) {
                        printf("Tim thay o vi tri %d\n", i);
                        found = 1;
                    }
                }
                if (!found) printf("Khong tim thay!\n");
                break;
	case 5: printf("Mang hien tai: ");
                for (i = 0; i < k; i++) {
                    printf("%d ", ary[i]);
                }
                printf("\n");
                break;
       default:
                printf("Lua chon khong hop le!\n");
}
	}while(n!=6);

	
	
	return 0;
}
