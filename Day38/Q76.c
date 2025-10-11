/*Q74 (2D Arrays)
Find the transpose of a matrix.*/
#include<stdio.h>
int main()
{
   int rows, cols,i,j;
    int matrix[10][10];
    int matrixT[10][10];

    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of cols: ");
    scanf("%d",&cols);
    
    printf("Enter elements of first matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix entered:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrixT[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", matrixT[i][j]);
        }
        printf("\n");
    }
 return 0;
}
