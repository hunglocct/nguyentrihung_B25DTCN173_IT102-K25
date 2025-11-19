#include <stdio.h>
#include <string.h>

#define MAX 100

struct Food {
    char name[50];
    int price;
};

void inMenu(struct Food a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d. %s : %d\n", i+1, a[i].name, a[i].price);
    }
}

void them(struct Food a[], int *n){
    int pos;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &pos);
    getchar();

    if(pos < 1 || pos > *n+1){
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = *n; i >= pos; i--){
        a[i] = a[i-1];
    }

    printf("Nhap ten mon: ");
    fgets(a[pos-1].name, 50, stdin);
    a[pos-1].name[strcspn(a[pos-1].name, "\n")] = '\0';

    printf("Nhap gia: ");
    scanf("%d", &a[pos-1].price);
    getchar();

    (*n)++;
    printf("Da them!\n");
}

void sua(struct Food a[], int n){
    int pos;
    printf("Nhap vi tri muon sua: ");
    scanf("%d", &pos);
    getchar();

    if(pos < 1 || pos > n){
        printf("Vi tri khong hop le!\n");
        return;
    }

    printf("Nhap ten moi: ");
    fgets(a[pos-1].name, 50, stdin);
    a[pos-1].name[strcspn(a[pos-1].name, "\n")] = '\0';

    printf("Nhap gia moi: ");
    scanf("%d", &a[pos-1].price);

    printf("Da sua!\n");
}

void xoa(struct Food a[], int *n){
    int pos;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > *n){
        printf("Vi tri khong hop le!\n");
        return;
    }

    for(int i = pos-1; i < *n -1; i++){
        a[i] = a[i+1];
    }

    (*n)--;
    printf("Da xoa!\n");
}

void sapxepTang(struct Food a[], int n){
    int i, j;
    struct Food temp;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(a[i].price > a[j].price){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapxepGiam(struct Food a[], int n){
    int i, j;
    struct Food temp;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(a[i].price < a[j].price){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void timTT(struct Food a[], int n){
    char key[50];
    int i, found = 0;

    printf("Nhap ten mon can tim: ");
    getchar();
    fgets(key, 50, stdin);
    key[strcspn(key, "\n")] = '\0';

    for(i = 0; i < n; i++){
        if(strcmp(a[i].name, key) == 0){
            printf("Tim thay: %s - %d\n", a[i].name, a[i].price);
            found = 1;
        }
    }

    if(!found) printf("Khong tim thay!\n");
}

void timNP(struct Food a[], int n){
    char key[50];
    int left = 0, right = n-1, mid, cmp;

    printf("Nhap ten mon can tim: ");
    getchar();
    fgets(key, 50, stdin);
    key[strcspn(key, "\n")] = '\0';

    while(left <= right){
        mid = (left + right) / 2;
        cmp = strcmp(a[mid].name, key);

        if(cmp == 0){
            printf("Tim thay: %s - %d\n", a[mid].name, a[mid].price);
            return;
        }
        else if(cmp < 0) left = mid + 1;
        else right = mid - 1;
    }

    printf("Khong tim thay!\n");
}

int main(){
    struct Food a[MAX] = {
        {"Pho", 30000},
        {"Bun bo", 35000},
        {"Com tam", 40000}
    };

    int n = 3;
    int ch, sub;

    do {
        printf("\n===== MENU =====\n");
        printf("1. In menu\n");
        printf("2. Them\n");
        printf("3. Sua\n");
        printf("4. Xoa\n");
        printf("5. Sap xep\n");
        printf("6. Tim kiem\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                inMenu(a, n);
                break;

            case 2:
                them(a, &n);
                break;

            case 3:
                sua(a, n);
                break;

            case 4:
                xoa(a, &n);
                break;

            case 5:
                printf("a. Giam dan theo price (1)\n");
                printf("b. Tang dan theo price (2)\n");
                printf("Chon: ");
                scanf("%d", &sub);

                if(sub == 1) sapxepGiam(a, n);
                else sapxepTang(a, n);

                printf("Da sap xep!\n");
                break;

            case 6:
                printf("a. Tim kiem tuyen tinh (1)\n");
                printf("b. Tim kiem nhi phan (2)\n");
                printf("Chon: ");
                scanf("%d", &sub);

                if(sub == 1) timTT(a, n);
                else timNP(a, n);
                break;

            case 7:
                printf("Thoat!\n");
                break;
        }

    } while(ch != 7);

    return 0;
}

