#include <stdio.h>

int main() {

    int ans, score = 0;

    printf("Quiz Started\n\n");

    printf("1. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d",&ans);

    if(ans == 1)
        score++;

    printf("\n2. Which is a loop in C?\n");
    printf("1. if\n2. for\n3. switch\n");
    scanf("%d",&ans);

    if(ans == 2)
        score++;

    printf("\n3. Size of int is usually?\n");
    printf("1. 2 bytes\n2. 4 bytes\n3. 8 bytes\n");
    scanf("%d",&ans);

    if(ans == 2)
        score++;

    printf("\nYour score = %d/3", score);

    return 0;
}