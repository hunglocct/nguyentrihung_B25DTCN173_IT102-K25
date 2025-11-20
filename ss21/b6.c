#include "stdio.h"
#include "string.h"
struct Student {
    char name[50];
    int age;
    float grade;
};
void printStudentInfo(struct Student student) {
    printf("Thong tin hoc sinh:\n");
    printf("Ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("Diem trung binh: %.2f\n", student.grade);
}
int main() {
    struct Student students[5];
    char searchName[50];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin cho hoc sinh thu %d:\n", i + 1);

        printf("Nhap ten hoc sinh: ");
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Nhap tuoi hoc sinh: ");
        scanf("%d", &students[i].age);

        printf("Nhap diem trung binh cua hoc sinh: ");
        scanf("%f", &students[i].grade);
        getchar(); 
    }

    printf("Nhap ten hoc sinh can tim: ");
    fgets(searchName, 50, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printStudentInfo(students[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay hoc sinh voi ten: %s\n", searchName);
    }

    return 0;
}