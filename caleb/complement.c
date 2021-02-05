#include <stdio.h>

int main()
{
    printf("What is your name? ");
    char name[21];
    scanf("%s", name);
    printf("Hello %s!\nYou look great today", name);
    return 0;
}
