#include <stdio.h>

int main() {

    int seats = 50;
    int choice, ticket;

    do {

        printf("\n1.Book Ticket");
        printf("\n2.Check Available Seats");
        printf("\n3.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:

                printf("Enter number of tickets: ");
                scanf("%d",&ticket);

                if(ticket <= seats) {
                    seats -= ticket;
                    printf("Ticket booked successfully");
                }
                else
                    printf("Seats not available");

                break;


            case 2:
                printf("Available seats = %d",seats);
                break;


            case 3:
                printf("Thank you");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice != 3);


    return 0;
}