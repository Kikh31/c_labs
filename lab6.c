#include <stdio.h>
#include <stdlib.h>

int main() {
    double arr1[4] = {56.4, 36.5, 7.7, 44.3};

    for (int i = 0; i < 4; i++) {
        printf("[%d] - %.1f\n", i, *(arr1 + i));
    }

    printf("\n");

    double *arr2 = (double *) malloc(4 * sizeof(double));
    arr2[0] = 56.4;
    arr2[1] = 36.5;
    arr2[3] = 7.7;
    arr2[4] = 44.3;
    for (int i = 0; i < 4; i++) {
        printf("[%d] - %.1f\n", i, *(arr1 + i));
    }
    free(arr2);
}