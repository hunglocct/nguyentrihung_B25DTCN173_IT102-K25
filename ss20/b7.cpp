#include "stdio.h"
#include "string.h"

struct Sinhvien{
    int id;
    char name[50];
    int age;
    char num[12];
};

int main(){
    struct Sinhvien Sv[50];
    int n, i, id, flag = 0;
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

    printf("_______________________________________\n");
    printf("|| id || Ten sv || Tuoi || SDT ||\n");
    for(i = 1; i <= n; i++){
        printf("_______________________________________\n");
        printf("|| %d || %s || %d || %s ||\n", Sv[i].id, Sv[i].name, Sv[i].age, Sv[i].num);
    }

    printf("\nNhap id sv can xoa: ");
    scanf("%d", &id);

    flag = 0;
    int vitri = 0;
    for(i = 1; i <= n; i++){
        if(Sv[i].id == id){
            flag = 1;
            vitri = i;
            break;
        }
    }

    if(flag == 0){
        printf("Khong tim thay sinh vien co id %d\n", id);
        return 0;
    }

    for(i = vitri; i < n; i++){
        Sv[i] = Sv[i+1];
        Sv[i].id = i; 
    }
    n--;

    printf("\nDa xoa sinh vien thanh cong!\n");

    printf("_______________________________________\n");
    printf("|| id || Ten sv || Tuoi || SDT ||\n");
    for(i = 1; i <= n; i++){
        printf("_______________________________________\n");
        printf("|| %d || %s || %d || %s ||\n", Sv[i].id, Sv[i].name, Sv[i].age, Sv[i].num);
    }

    return 0;
}

