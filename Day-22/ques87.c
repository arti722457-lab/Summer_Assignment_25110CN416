#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, count = 0;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {

        if(str[i] == ch)
            count++;
    }

    printf("Frequency of %c = %d", ch, count);

    return 0;
}