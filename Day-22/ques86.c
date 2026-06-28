#include <stdio.h>

int main() {
    char str[200];
    int i, count = 1;

    printf("Enter sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    printf("Total words = %d", count);

    return 0;
}