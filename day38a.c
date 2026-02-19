//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, m;

    // Input dimensions for the matrix
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    // A symmetric matrix must be square
    if (n != m) {
        printf("False\n");
        return 0;
    }

    int matrix[n][m];

    // Input elements for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    int isSymmetric = 1; // Assume it is symmetric
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Output result
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
