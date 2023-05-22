#include <stdio.h>

int c2313(int argc, char *argv[])
{
    int input;
    scanf("%d", &input);
    printf("%d", (input / 10) + ((input % 10) / 5) + (((input % 10) % 5) / 3) + ((((input % 10) % 5) % 3) / 1));
}