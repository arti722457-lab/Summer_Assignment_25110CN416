#include <stdio.h>

int main() {

    int arr[100], n, i, choice, sum=0;

    printf("Enter array size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);


    do {

        printf("\n1.Display");
        printf("\n2.Sum");
        printf("\n3.Reverse");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                break;


            case 2:
                sum=0;

                for(i=0;i<n;i++)
                    sum += arr[i];

                printf("Sum = %d",sum);
                break;


            case 3:
                printf("Reverse array:\n");

                for(i=n-1;i>=0;i--)
                    printf("%d ",arr[i]);

                break;


            case 4:
                printf("Exit");
                break;


            default:
                printf("Invalid choice");
        }

    }while(choice != 4);


    return 0;
}