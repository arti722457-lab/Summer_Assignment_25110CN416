#include <stdio.h>

int main() {
    int i, j, n;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print characters
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        // Print reverse characters
        ch -= 2;
        for (j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}