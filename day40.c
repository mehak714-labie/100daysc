//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
#define MAX 10
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void diagonalTraversal(int matrix[MAX][MAX], int rows, int cols) {
    printf("Diagonal Traversal of the Matrix:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
    }
    printf("\n");
}
int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Input elements for the matrix:\n");
    inputMatrix(matrix, rows, cols);

    diagonalTraversal(matrix, rows, cols);

    return 0;
}
