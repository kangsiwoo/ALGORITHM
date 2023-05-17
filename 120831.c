#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int sum;

int p120831(int n) {
    if((n % 2 == 1 ? n -= 1 : n) > 0)
    {
        sum += n;
        p120831(n-2);
    }


    return sum;
}