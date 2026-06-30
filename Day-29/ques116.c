#include <stdio.h>

struct product {

    int id;
    char name[50];
    int quantity;
    float price;

};


int main() {

    struct product p[100];
    int n, i;


    printf("Enter number of products: ");
    scanf("%d",&n);


    for(i=0;i<n;i++) {

        printf("\nEnter product id: ");
        scanf("%d",&p[i].id);

        printf("Enter product name: ");
        scanf("%s",p[i].name);

        printf("Enter quantity: ");
        scanf("%d",&p[i].quantity);

        printf("Enter price: ");
        scanf("%f",&p[i].price);
    }


    printf("\nInventory Details:\n");


    for(i=0;i<n;i++) {

        printf("\nID: %d",p[i].id);
        printf("\nName: %s",p[i].name);
        printf("\nQuantity: %d",p[i].quantity);
        printf("\nPrice: %.2f\n",p[i].price);

    }


    return 0;
}