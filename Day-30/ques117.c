#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int marks;
};

int main() {

    struct student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {

        printf("\nEnter roll: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    }


    printf("\nStudent Records:\n");

    for(i=0;i<n;i++) {

        printf("\nRoll: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nMarks: %d\n",s[i].marks);
    }

    return 0;
}