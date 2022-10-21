#include <stdio.h>

int main() {
    int arr[] = {88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for (int i = 0; i < 9; i++) printf("[%d] - %d\n", i, arr[i]);

    printf("\n");

    int matrix1[2][2] = {
            {1, 1},
            {1, 4}
    };
    int matrix2[2][2] = {
            {1, 2},
            {4, 1}
    };
    int matrix_res[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix_res[i][j] = 0;
            for (int t = 0; t < 2; t++) matrix_res[i][j] += matrix1[i][t] * matrix2[t][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) printf("%d ", matrix_res[i][j]);
        printf("\n");
    }
}