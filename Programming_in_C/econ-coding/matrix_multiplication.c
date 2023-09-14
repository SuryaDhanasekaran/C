#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void matrixMultiplication(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &colsA);

    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. The number of columns in A must be equal to the number of rows in B.\n");
        return 1; // Exit with an error code
    }

    if (rowsA > MAX_SIZE || colsA > MAX_SIZE || rowsB > MAX_SIZE || colsB > MAX_SIZE) {
        printf("Matrix dimensions are too large. Please adjust MAX_SIZE.\n");
        return 1; // Exit with an error code
    }

    int (*matrixA)[MAX_SIZE] = malloc(sizeof(int) * rowsA * colsA);
    int (*matrixB)[MAX_SIZE] = malloc(sizeof(int) * rowsB * colsB);
    int (*resultMatrix)[MAX_SIZE] = malloc(sizeof(int) * rowsA * colsB);

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    matrixMultiplication(matrixA, matrixB, resultMatrix, rowsA, colsA, colsB);

    printf("Resultant Matrix (C):\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    free(matrixA);
    free(matrixB);
    free(resultMatrix);

    return 0;
}
