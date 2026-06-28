#include <stdio.h>

int main() {
    int n, num, largestPrime = -1, isPrime, i, j;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        isPrime = 1;

        if (num <= 1)
            isPrime = 0;
        else {
            for (j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime && num > largestPrime)
            largestPrime = num;
    }

    if (largestPrime == -1)
        printf("No prime number found.\n");
    else
        printf("Largest prime number = %d\n", largestPrime);

    return 0;
}