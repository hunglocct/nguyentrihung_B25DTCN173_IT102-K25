#include <stdio.h>

int main() {
    int i, j, n, k, vitri, gt, temp, left, right, mid, x, found, dem;
    int arr[100];
    char tiep;
    int flag = 0;

    do {
        printf("\nQUAN LY MANG SO NGUYEN VIP PRO\n");
        printf("1.Nhap so luong va gia tri cac phan tu cho mang\n");
        printf("2.In ra gia tri cac phan tu trong mang\n");
        printf("3.In cac phan tu co chi so chan trong mang\n");
        printf("4.In ra gia tri lon nhat cua cac phan tu trong mang\n");
        printf("5.Them moi mot phan tu vao vi tri cu the\n");
        printf("6.Xoa phan tu tai mot vi tri cu the\n");
        printf("7.Sap xep mang giam dan\n");
        printf("8.Kiem tra su ton tai cua phan tu\n");
        printf("9.In ra cac phan tu xuat hien dung 1 lan\n");
        printf("10.Tim va in cac cap phan tu co tong bang k\n");
        printf("11.Thoat chuong trinh\n");
        printf("Lua chon: ");
        scanf("%d", &k);

        switch (k) {
        case 1:
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("Nhap phan tu thu %d: ", i);
                scanf("%d", &arr[i]);
            }
            flag = 1;
            break;

        case 2:
            if (flag == 1) {
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 3:
            if (flag == 1) {
                printf("Cac phan tu co chi so chan: ");
                for (i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0)
                    printf(" %d ", arr[i]);
            }
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 4:
            if (flag == 1) {
                int max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max){
					max = arr[i];
					}
					
                }
                printf("Gia tri lon nhat trong mang la: %d\n", max);
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 5:
            if (flag == 1) {
                printf("Nhap vi tri muon them: ");
                scanf("%d", &vitri);
                printf("Nhap gia tri muon them: ");
                scanf("%d", &gt);
                if (vitri < 0 || vitri > n)
                    printf("Vi tri khong hop le!\n");
                else {
                    for (i = n; i > vitri; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[vitri] = gt;
                    n++;
                    printf("Da them phan tu %d vao vi tri %d\n", gt, vitri);
                }
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 6:
            if (flag == 1) {
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &vitri);
                if (vitri < 0 || vitri >= n)
                    printf("Vi tri khong hop le!\n");
                else {
                    for (i = vitri; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d\n", vitri);
                }
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 7:
            if (flag == 1) {
                for (i = 1; i < n; i++) {
                int key = arr[i];
                j = i - 1;
                while (j >= 0 && arr[j] < key) {
                    arr[j + 1] = arr[j];
                    j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Da sap xep mang giam dan bang!\n");
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 8:
            if (flag == 1) {
                printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                left = 0;
                right = n - 1;
                found = 0;

                for (i = 1; i < n; i++) {
                    int key = arr[i];
                    j = i - 1;
                    while (j >= 0 && arr[j] < key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }

                while (left <= right) {
                    mid = (left + right) / 2;
                    if (arr[mid] == x) {
                        printf("Tim thay %d tai vi tri %d\n", x, mid);
                        found = 1;
                        break;
                    } else if (arr[mid] < x)
                        right = mid - 1;
                    else
                        left = mid + 1;
                }
                if (!found)
                    printf("Khong tim thay phan tu %d trong mang!\n", x);
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 9:
            if (flag == 1) {
            	printf("Cac phan tu xuat hien dung 1 lan: ");
                for (i = 0; i < n; i++) {
                    dem = 0;
                    for (j = 0; j < n; j++) {
                        if (arr[i] == arr[j]) dem++;
                    }
                    if (dem == 1) printf("%d ", arr[i]);
                }
                printf("\n");
            } else printf("Vui long nhap mang truoc!\n");
            break;

        case 10:
            if (flag == 1) {
                int ksum;
                printf("Nhap gia tri k: ");
                scanf("%d", &ksum);
                printf("Cac cap phan tu co tong bang %d la:\n", ksum);
                int foundPair = 0;
                for (i = 0; i < n - 1; i++) {
                    for (j = i + 1; j < n; j++) {
                    if (arr[i] + arr[j] == ksum) {
                    printf("(%d, %d)\n", arr[i], arr[j]);
                    foundPair = 1;
                    }
                    }
                }
                if (!foundPair)
                    printf("Khong co cap nao co tong bang %d\n", ksum);
            } else printf("Vui long nhap mang truoc!\n");
            break;
        case 11:
            printf("Chuong trinh ket thuc.\n");
            return 0;

        default:
            printf("Lua chon khong hop le!\n");
        }

        printf("\nBan co muon tiep tuc khong (Y) \nNhap bat ki ki tu de thoat: ");
        scanf(" %c", &tiep);
    } while (tiep == 'Y' || tiep == 'y');

    printf("Chuong trinh ket thuc.\n");
    return 0;
}

