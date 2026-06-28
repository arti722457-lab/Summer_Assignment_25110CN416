#include <stdio.h>

struct contact {

    char name[50];
    char phone[20];

};

int main() {

    struct contact c[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d",&n);


    for(i=0;i<n;i++) {

        printf("\nEnter name: ");
        scanf("%s",c[i].name);

        printf("Enter phone number: ");
        scanf("%s",c[i].phone);
    }


    printf("\nContact List:\n");

    for(i=0;i<n;i++) {

        printf("\nName: %s",c[i].name);
        printf("\nPhone: %s\n",c[i].phone);
    }


    return 0;
}