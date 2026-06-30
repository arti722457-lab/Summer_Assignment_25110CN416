#include <stdio.h>

char name[50][50];
int roll[50];
int marks[50];
int n = 0;


void addStudent() {

    printf("Enter roll: ");
    scanf("%d",&roll[n]);

    printf("Enter name: ");
    scanf("%s",name[n]);

    printf("Enter marks: ");
    scanf("%d",&marks[n]);

    n++;

    printf("Student Added\n");
}


void display() {

    int i;

    for(i=0;i<n;i++) {

        printf("\nRoll: %d",roll[i]);
        printf("\nName: %s",name[i]);
        printf("\nMarks: %d\n",marks[i]);
    }
}


void search() {

    int r,i;

    printf("Enter roll to search: ");
    scanf("%d",&r);


    for(i=0;i<n;i++) {

        if(roll[i]==r) {

            printf("Found");
            printf("\nName: %s",name[i]);
            printf("\nMarks: %d",marks[i]);
            return;
        }
    }

    printf("Not Found");
}


int main() {

    int choice;


    do {

        printf("\n--- Student Management ---");
        printf("\n1.Add Student");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }


    }while(choice!=4);


    return 0;
}