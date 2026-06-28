#include <stdio.h>

int main() {

    char name[50];
    int roll;
    int m1, m2, m3, total;
    float per;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects:\n");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;

    per = total / 3.0;

    printf("\n========== MARKSHEET ==========\n");

    printf("Name : %s\n", name);
    printf("Roll No : %d\n", roll);

    printf("Subject 1 : %d\n", m1);
    printf("Subject 2 : %d\n", m2);
    printf("Subject 3 : %d\n", m3);

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", per);


    if(per >= 90)
        printf("Grade : A");

    else if(per >= 75)
        printf("Grade : B");

    else if(per >= 60)
        printf("Grade : C");

    else if(per >= 40)
        printf("Grade : D");

    else
        printf("Grade : Fail");


    return 0;
}