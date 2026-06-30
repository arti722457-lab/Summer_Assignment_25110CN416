#include <stdio.h>

struct book {

    int id;
    char name[50];
    int available;

};


int main() {

    struct book b[50];
    int n,i,choice,id;


    printf("Enter number of books: ");
    scanf("%d",&n);


    for(i=0;i<n;i++) {

        printf("\nBook id: ");
        scanf("%d",&b[i].id);

        printf("Book name: ");
        scanf("%s",b[i].name);

        b[i].available=1;
    }


    printf("\n1.Display Books");
    printf("\n2.Issue Book");
    printf("\nEnter choice: ");
    scanf("%d",&choice);


    if(choice==1) {

        for(i=0;i<n;i++) {

            printf("\n%d %s",b[i].id,b[i].name);
        }
    }


    else if(choice==2) {

        printf("Enter book id: ");
        scanf("%d",&id);

        for(i=0;i<n;i++) {

            if(b[i].id==id) {

                b[i].available=0;
                printf("Book issued");
            }
        }
    }


    return 0;
}