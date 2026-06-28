#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int temp, rem, sum = 0, count = 0;

    temp = n;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}