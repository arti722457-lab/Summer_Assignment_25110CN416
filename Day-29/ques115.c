#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int choice;

    printf("Enter string: ");
    gets(str);


    do {

        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Uppercase");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);


        switch(choice) {

            case 1:
                printf("Length = %d",strlen(str));
                break;


            case 2:
                strrev(str);
                printf("Reverse = %s",str);
                break;


            case 3:

                for(int i=0; str[i]!='\0'; i++) {

                    if(str[i]>='a' && str[i]<='z')
                        str[i] -= 32;
                }

                printf("Uppercase = %s",str);
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