#include <stdio.h>

struct book {
    int id;
    char name[50];
    int issued;
};

int main() {

    struct book b[100];
    int n, i, choice;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("\nEnter book id: ");
        scanf("%d",&b[i].id);

        printf("Enter book name: ");
        scanf("%s",b[i].name);

        b[i].issued = 0;
    }

    printf("\n1. Display Books\n2. Issue Book");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    if(choice == 1) {

        for(i=0;i<n;i++) {
            printf("\nID: %d",b[i].id);
            printf("\nName: %s",b[i].name);
            printf("\nStatus: Available\n");
        }
    }

    else if(choice == 2) {

        int id;
        printf("Enter book id: ");
        scanf("%d",&id);

        for(i=0;i<n;i++) {

            if(b[i].id == id) {
                b[i].issued = 1;
                printf("Book issued successfully");
            }
        }
    }

    return 0;
}