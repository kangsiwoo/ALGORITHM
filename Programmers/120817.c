#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double p120817(int numbers[], size_t numbers_len) {
    int sum=0, n=0;


    while(n++ != numbers_len)
    {
        sum += numbers[n-1];
    }


    return (double)sum / numbers_len;
}