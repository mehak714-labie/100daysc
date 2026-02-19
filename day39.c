//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int seen[10000] = {0}; // Assuming matrix elements are in the range 0-9999
    int distinct = 1;
    for (int i = 0; i < rows && i < cols; i++) {
        int elem = matrix[i][i];
        if (seen[elem]) {
            distinct = 0;
            break;
        }
        seen[elem] = 1;
    }
    
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
