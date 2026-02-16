#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3], mul[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Logic for Addition
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Logic for Multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output Sum
    printf("\n Sum of Matrices: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }

    // Output Multiplication
    printf("\n Multiplication of Matrices: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}