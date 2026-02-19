//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    int rowSums[r];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++){
        rowSums[i]=0; 
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(int i=0;i<r;i++){
        printf("%d ",rowSums[i]);
    }
    return 0;

}