#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {

        for(j = 0; j < i; j++) {

            if(str[i] == str[j]) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(found == 0)
        printf("No repeating character");

    return 0;
}