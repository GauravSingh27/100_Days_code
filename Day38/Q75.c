/*Q75 (2D Arrays)
Add two matrices.*/
#include <stdio.h>
int main() {
    int rows, cols,i,j;
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of first matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of two matrices:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

