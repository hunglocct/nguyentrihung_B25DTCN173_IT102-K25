#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void nhapMang(int arr[], int *n);
void inMang(int arr[], int n);
void themPhanTu(int arr[], int *n);
void suaPhanTu(int arr[], int n);
void xoaPhanTu(int arr[], int *n);
void sapXepMang(int arr[], int n);
void timKiem(int arr[], int n);

int main() {
    int arr[MAX];
    int n = 0;
    char tiep;
    int luaChon;

    do {
        int i; // khai báo int ngoài for
        printf("\nQUAN LY MANG SO NGUYEN\n");
        printf("1. Nhap so phan tu va gia tri\n");
        printf("2. In ra cac phan tu\n");
        printf("3. Them mot phan tu\n");
        printf("4. Sua mot phan tu\n");
        printf("5. Xoa mot phan tu\n");
        printf("6. Sap xep mang\n");
        printf("7. Tim kiem phan tu\n");
        printf("8. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &luaChon);

        switch(luaChon) {
            case 1: nhapMang(arr, &n); break;
            case 2: inMang(arr, n); break;
            case 3: themPhanTu(arr, &n); break;
            case 4: suaPhanTu(arr, n); break;
            case 5: xoaPhanTu(arr, &n); break;
            case 6: sapXepMang(arr, n); break;
            case 7: timKiem(arr, n); break;
            case 8: printf("Ket thuc chuong trinh.\n"); exit(0);
            default: printf("Lua chon khong hop le!\n");
        }

        printf("\nBan co muon tiep tuc (Y)\nNhap bat ki de thoat: ");
        scanf(" %c", &tiep);

    } while (tiep == 'Y' || tiep == 'y');

    printf("Ket thuc chuong trinh.\n");
    return 0;
}


void nhapMang(int arr[], int *n) {
    int i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for(i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    int i;
    if(n == 0) { printf("Mang rong!\n"); return; }
    printf("Cac phan tu trong mang: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    int i, viTri, gt;
    if(*n >= MAX) { printf("Mang da day!\n"); return; }
    printf("Nhap vi tri muon them: ");
    scanf("%d", &viTri);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &gt);
    if(viTri < 0 || viTri > *n) { printf("Vi tri khong hop le!\n"); return; }
    for(i = *n; i > viTri; i--)
        arr[i] = arr[i-1];
    arr[viTri] = gt;
    (*n)++;
    printf("Da them %d vao vi tri %d\n", gt, viTri);
}

void suaPhanTu(int arr[], int n) {
    int viTri, gt;
    if(n == 0) { printf("Mang rong!\n"); return; }
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &viTri);
    if(viTri < 0 || viTri >= n) { printf("Vi tri khong hop le!\n"); return; }
    printf("Nhap gia tri moi: ");
    scanf("%d", &gt);
    arr[viTri] = gt;
    printf("Da sua vi tri %d thanh %d\n", viTri, gt);
}

void xoaPhanTu(int arr[], int *n) {
    int i, viTri;
    if(*n == 0) { printf("Mang rong!\n"); return; }
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &viTri);
    if(viTri < 0 || viTri >= *n) { printf("Vi tri khong hop le!\n"); return; }
    for(i = viTri; i < *n - 1; i++)
        arr[i] = arr[i+1];
    (*n)--;
    printf("Da xoa phan tu tai vi tri %d\n", viTri);
}

void sapXepMang(int arr[], int n) {
    int i, j, key, luaChon;
    if(n == 0) { printf("Mang rong!\n"); return; }
    printf("1. Tang dan\n2. Giam dan\nLua chon: ");
    scanf("%d", &luaChon);
    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        if(luaChon == 1) {
            while(j >= 0 && arr[j] > key) { arr[j+1] = arr[j]; j--; }
        } else {
            while(j >= 0 && arr[j] < key) { arr[j+1] = arr[j]; j--; }
        }
        arr[j+1] = key;
    }
    printf("Da sap xep mang.\n");
}

void timKiem(int arr[], int n) {
    int luaChon, x, i, left, right, mid;
    if(n == 0) { printf("Mang rong!\n"); return; }
    printf("1. Tuyen tinh\n2. Nhi phan (mang da sap xep giam dan)\nLua chon: ");
    scanf("%d", &luaChon);
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    if(luaChon == 1) {
        for(i = 0; i < n; i++) {
            if(arr[i] == x) { printf("Tim thay %d tai vi tri %d\n", x, i); return; }
        }
        printf("Khong tim thay %d\n", x);
    } else {
        left = 0; right = n - 1;
        while(left <= right) {
            mid = (left + right) / 2;
            if(arr[mid] == x) { printf("Tim thay %d tai vi tri %d\n", x, mid); return; }
            else if(arr[mid] < x) right = mid - 1;
            else left = mid + 1;
        }
        printf("Khong tim thay %d\n", x);
    }
}

