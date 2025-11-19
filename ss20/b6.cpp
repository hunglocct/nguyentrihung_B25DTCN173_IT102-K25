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
    int n, i, id;
    char tiep;

    printf("Nhap vao so sinh vien: ");
    scanf("%d",&n);
    getchar();

    for(i = 1; i <= n; i++){
        Sv[i].id = i;

        printf("Nhap ten sv %d: ", i);
        fgets(Sv[i].name, 50, stdin);
        Sv[i].name[strcspn(Sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi sv %d: ", i);
        scanf("%d", &Sv[i].age);
        getchar();

        printf("Nhap phone sv %d: ", i);
        fgets(Sv[i].num, 12, stdin);
        Sv[i].num[strcspn(Sv[i].num, "\n")] = '\0';
    }

    printf("_______________________________________\n");
    printf("|| id || Ten sv || Tuoi sv || SDT ||\n");
    for(i = 1; i <= n; i++){
        printf("_______________________________________\n");
        printf("|| %d || %s || %d || %s ||\n",
               Sv[i].id, Sv[i].name, Sv[i].age, Sv[i].num);
    }

    printf("Ban co muon them sv (y/n): ");
    getchar();
    scanf("%c", &tiep);

    while(tiep == 'y' || tiep == 'Y'){
        id = n + 1;  
        Sv[id].id = id;

        getchar(); 

        printf("Nhap ten sv %d: ", id);
        fgets(Sv[id].name, 50, stdin);
        Sv[id].name[strcspn(Sv[id].name, "\n")] = '\0';

        printf("Nhap tuoi sv %d: ", id);
        scanf("%d", &Sv[id].age);
        getchar();

        printf("Nhap phone sv %d: ", id);
        fgets(Sv[id].num, 12, stdin);
        Sv[id].num[strcspn(Sv[id].num, "\n")] = '\0';

        n++; 

        printf("_______________________________________\n");
        printf("|| id || Ten sv || Tuoi sv || SDT ||\n");
        for(i = 1; i <= n; i++){
            printf("_______________________________________\n");
            printf("|| %d || %s || %d || %s ||\n",
                   Sv[i].id, Sv[i].name, Sv[i].age, Sv[i].num);
        }

        printf("Ban co muon them sv (Y): ");
        scanf("%c", &tiep);
    }

    return 0;
}

