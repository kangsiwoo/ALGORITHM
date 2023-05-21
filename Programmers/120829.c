#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int p120829(int angle) {
    return angle / 90 == 0 ? 1 : angle % 90 == 0 ? angle / 90 == 1 ? 2 : angle / 90 == 2 ? 4 : 3  : 3;
}