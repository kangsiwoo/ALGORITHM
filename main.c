#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double p12944(int arr[], size_t arr_len) {
    double answer = 0;
    int sum =0;
    int i=0;
    for(i=0; i< arr_len; i++){
        sum += arr[i];
    }

    answer = (double)sum / arr_len;
    return answer;
}