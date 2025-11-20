#include "stdio.h"
#include "string.h"
#define MAX_BOOKS 100
struct Book {
    char id[20];
    char title[100];
    char author[50];
    float price;
    char category[50];
};
void inputBook(struct Book* book) {
    printf("Nhap ma sach: ");
    fgets(book->id, 20, stdin);
    book->id[strcspn(book->id, "\n")] = '\0';

    printf("Nhap ten sach: ");
    fgets(book->title, 100, stdin);
    book->title[strcspn(book->title, "\n")] = '\0';

    printf("Nhap tac gia: ");
    fgets(book->author, 50, stdin);
    book->author[strcspn(book->author, "\n")] = '\0';

    printf("Nhap gia tien: ");
    scanf("%f", &book->price);
    getchar(); 

    printf("Nhap the loai: ");
    fgets(book->category, 50, stdin);
    book->category[strcspn(book->category, "\n")] = '\0';
}
void displayBook(const struct Book* book) {
    printf("Ma sach: %s\n", book->id);
    printf("Ten sach: %s\n", book->title);
    printf("Tac gia: %s\n", book->author);
    printf("Gia tien: %.2f\n", book->price);
    printf("The loai: %s\n", book->category);
}
int main() {
    struct Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin sach theo ma sach\n");
        printf("6. Sap xep sach theo gia (tang/giam)\n");
        printf("7. Tim kiem sach theo ten sach\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: {
                int n;
                printf("Nhap so luong sach can them: ");
                scanf("%d", &n);
                getchar(); 
                for (int i = 0; i < n; i++) {
                    printf("Nhap thong tin cho sach thu %d:\n", bookCount + 1);
                    inputBook(&books[bookCount]);
                    bookCount++;
                }
                break;
            }
            case 2: {
                printf("\nThong tin cac cuon sach:\n");
                for (int i = 0; i < bookCount; i++) {
                    printf("\nSach thu %d:\n", i + 1);
                    displayBook(&books[i]);
                }
                break;
            }
            case 3: {
                int pos;
                struct Book newBook;
                printf("Nhap vi tri can them sach (0 den %d): ", bookCount);
                scanf("%d", &pos);
                getchar(); 
                if (pos < 0 || pos > bookCount) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                printf("Nhap thong tin sach moi:\n");
                inputBook(&newBook);
                for (int i = bookCount; i > pos; i--) {
                    books[i] = books[i - 1];
                }
                books[pos] = newBook;
                bookCount++;
                break;
            }
            case 4: {
                char delId[20];
                printf("Nhap ma sach can xoa: ");
                fgets(delId, 20, stdin);
                delId[strcspn(delId, "\n")] = '\0';
                int found = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (strcmp(books[i].id, delId) == 0) {
                        for (int j = i; j < bookCount - 1; j++) {
                            books[j] = books[j + 1];
                        }
                        bookCount--;
                        found = 1;
                        printf("Da xoa sach co ma: %s\n", delId);
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay sach voi ma: %s\n", delId);
                }
                break;
            }
            case 5: {
                char updId[20];
                printf("Nhap ma sach can cap nhat: ");
                fgets(updId, 20, stdin);
                updId[strcspn(updId, "\n")] = '\0';
                int found = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (strcmp(books[i].id, updId) == 0) {
                        printf("Nhap thong tin sach moi:\n");
                        inputBook(&books[i]);
                        found = 1;
                        printf("Da cap nhat sach co ma: %s\n", updId);
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay sach voi ma: %s\n", updId);
                }
                break;
            }
            case 6: {
                int order;
                printf("Chon kieu sap xep (1: Tang dan, 2: Giam dan): ");
                scanf("%d", &order);
                getchar(); 
                for (int i = 0; i < bookCount - 1; i++) {
                    for (int j = i + 1; j < bookCount; j++) {
                        if ((order == 1 && books[i].price > books[j].price) ||
                            (order == 2 && books[i].price < books[j].price)) {
                            struct Book temp = books[i];
                            books[i] = books[j];
                            books[j] = temp;
                        }
                    }
                }
                printf("Da sap xep sach theo gia.\n");
                break;
            }
            case 7: {
                char searchTitle[100];
                printf("Nhap ten sach can tim: ");
                fgets(searchTitle, 100, stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0';
                int found = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (strstr(books[i].title, searchTitle) != NULL) {
                        printf("\nTim thay sach:\n");
                        displayBook(&books[i]);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay sach voi ten: %s\n", searchTitle);
                }
                break;
            }
            
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}