#include <stdio.h>

int main() {
    int num, product = 1, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        product = product * rem;
        num = num / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}