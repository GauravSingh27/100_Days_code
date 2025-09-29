/*Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.*/
#include <stdio.h>

int main() {
    int rows, cols ,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        rowSums[i] = 0;  // Initialize sum for each row
        for ( j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];  // Add to row sum
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSums[i]);
    }

    return 0;
}

