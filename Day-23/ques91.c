#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j, flag = 1;
    int count1[26] = {0};
    int count2[26] = {0};

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    for(i = 0; s1[i] != '\0'; i++) {
        count1[s1[i]-'a']++;
    }

    for(i = 0; s2[i] != '\0'; i++) {
        count2[s2[i]-'a']++;
    }

    for(i = 0; i < 26; i++) {

        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram strings");
    else
        printf("Not anagram strings");

    return 0;
}