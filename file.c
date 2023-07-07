#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

#define N 25
#define M 80

void Test(int *OY);

int main() {
    int OY[80] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13,
                  12, 11, 10, 9,  8,  7,  6,  5,  4,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13,
                  14, 15, 16, 17, 18, 19, 20, 21, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
                  10, 9,  8,  7,  6,  5,  4,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15};

    Test(OY);
    return 0;
}

void Test(int *OY) {
    char **Matrix = fild();
    plotting(Matrix, OY);
    output(Matrix);
    FREE(Matrix);
}
