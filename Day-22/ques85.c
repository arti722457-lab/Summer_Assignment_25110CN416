#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter string: ");
    gets(str);

    i = 0;
    j = strlen(str) - 1;

    while(i < j) {

        if(str[i] != str[j]) {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");

    return 0;
}