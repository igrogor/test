#include "functions.h"

#include <stdio.h>
#include <stdlib.h>

#define N 25
#define M 80

char **fild() {
    char **matrix;
    matrix = (char **)calloc(N, sizeof(char *));
    for (int i = 0; i < N; i++) {
        *(matrix + i) = (char *)calloc(M, sizeof(char));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matrix[i][j] = ' ';
        }
    }
    return matrix;
}

void output(char **matrix) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}

void plotting(char **matrix, int *OY) {
    for (int i = 0; i < M; i++) {
        matrix[OY[i]][i] = '*';
    }
}

void FREE(char **matrix) {
    for (int i = 0; i < N; i++) {
        free(matrix[i]);
    }
    free(matrix);
}