//Q75: Add two matrices.
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;

    // Input dimensions for first matrix
    printf("Enter number of rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    int matrix1[r1][c1];

    // Input elements for first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions for second matrix
    printf("Enter number of rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("Error: Matrices must have the same dimensions to be added.\n");
        return 1;
    }

    int matrix2[r2][c2];

    // Input elements for second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int sumMatrix[r1][c1];

    // Add the two matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resulting sum matrix
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}