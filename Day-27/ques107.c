#include <stdio.h>

struct employee {
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main() {

    struct employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++) {

        printf("\nEnter employee id: ");
        scanf("%d",&e[i].id);

        printf("Enter name: ");
        scanf("%s",e[i].name);

        printf("Enter basic salary: ");
        scanf("%f",&e[i].basic);

        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;

        e[i].total = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Details:\n");

    for(i = 0; i < n; i++) {

        printf("\nID: %d",e[i].id);
        printf("\nName: %s",e[i].name);
        printf("\nBasic Salary: %.2f",e[i].basic);
        printf("\nHRA: %.2f",e[i].hra);
        printf("\nDA: %.2f",e[i].da);
        printf("\nTotal Salary: %.2f\n",e[i].total);
    }

    return 0;
}