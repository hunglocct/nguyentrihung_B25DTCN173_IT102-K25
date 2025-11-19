#include "stdio.h"
#include "string.h"

struct Sinhvien{
    int id;
    char name[50];
    int age;
    char num[12];
};

int main(){
    struct Sinhvien Sv[100];
    int n, i, pos;

    printf("Nhap vao so sinh vien: ");
    scanf("%d", &n);
    getchar();

    for(i = 1; i <= n; i++){
        Sv[i].id = i;

        printf("Nhap ten sv %d: ", i);
        fgets(Sv[i].name , 50, stdin);
        Sv[i].name[strcspn(Sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi sv %d: ", i);
        scanf("%d", &Sv[i].age);
        getchar();

        printf("Nhap phone sv %d: ", i);
        fgets(Sv[i].num, 13, stdin);
        Sv[i].num[strcspn(Sv[i].num, "\n")] = '\0';
    }

    printf("\nNhap vi tri can chen (1 -> %d): ", n+1);
    scanf("%d", &pos);
    getchar();

    if(pos < 1 || pos > n+1){
        printf("Vi tri chen khong hop le!\n");
        return 0;
    }

    for(i = n + 1; i > pos; i--){
        Sv[i] = Sv[i - 1];
        Sv[i].id = i;  
    }

    n++;

    Sv[pos].id = pos;

    printf("Nhap ten sinh vien moi: ");
    fgets(Sv[pos].name, 50, stdin);
    Sv[pos].name[strcspn(Sv[pos].name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &Sv[pos].age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(Sv[pos].num, 12, stdin);
    Sv[pos].num[strcspn(Sv[pos].num, "\n")] = '\0';

    for(i = pos + 1; i <= n; i++){
        Sv[i].id = i;
    }

    printf("\n=== DANH SACH SAU KHI CHEN ===\n");
    printf("__________________________________________\n");
    printf("|| id || Ten sv || Tuoi || SDT ||\n");

    for(i = 1; i <= n; i++){
        printf("__________________________________________\n");
        printf("|| %d || %s || %d || %s ||\n",
               Sv[i].id, Sv[i].name, Sv[i].age, Sv[i].num);
    }

    return 0;
}

