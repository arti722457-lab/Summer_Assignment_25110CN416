#include <stdio.h>

struct account {
    int accno;
    char name[50];
    float balance;
};

int main() {

    struct account a;
    int choice;
    float amount;

    printf("Enter account number: ");
    scanf("%d",&a.accno);

    printf("Enter name: ");
    scanf("%s",a.name);

    a.balance = 0;

    do {

        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Check Balance");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Enter amount: ");
                scanf("%f",&amount);

                a.balance += amount;
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);

                if(amount <= a.balance)
                    a.balance -= amount;
                else
                    printf("Insufficient balance");

                break;

            case 3:
                printf("Balance = %.2f",a.balance);
                break;

            case 4:
                printf("Thank you");
        }

    }while(choice != 4);

    return 0;
}