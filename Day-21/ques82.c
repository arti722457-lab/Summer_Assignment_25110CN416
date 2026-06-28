#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, len = 0;

    printf("Enter string: ");
    gets(str);

    while(str[len] != '\0')
        len++;

    for(i = 0, j = len - 1; i < j; i++, j--) {

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reverse string = %s", str);

    return 0;
}