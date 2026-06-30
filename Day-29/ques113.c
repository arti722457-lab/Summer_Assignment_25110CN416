#include <stdio.h>

int main() {

    int choice;
    float a,b;

    do {

        printf("\n1.Add");
        printf("\n2.Subtract");
        printf("\n3.Multiply");
        printf("\n4.Divide");
        printf("\n5.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        if(choice >= 1 && choice <= 4) {

            printf("Enter two numbers: ");
            scanf("%f %f",&a,&b);
        }

        switch(choice) {

            case 1:
                printf("Sum = %.2f",a+b);
                break;

            case 2:
                printf("Difference = %.2f",a-b);
                break;

            case 3:
                printf("Product = %.2f",a*b);
                break;

            case 4:
                printf("Division = %.2f",a/b);
                break;

            case 5:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice != 5);

    return 0;
}