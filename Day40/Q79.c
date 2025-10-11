/*Q79 (2D Arrays)
Perform diagonal traversal of a matrix.*/
#include <stdio.h>

void diagonalTraversal(int matrix[][100], int m, int n) 
{
    int result[m*n];
    int index = 0;
    int k,i;
    for ( k = 0; k < m + n - 1; k++) {
        int row = (k < n) ? 0 : k - n + 1;
        int col = (k < n) ? k : n - 1;

        int temp[100];
        int tempIndex = 0;

        while (row < m && col >= 0) {
            temp[tempIndex++] = matrix[row][col];
            row++;
            col--;
        }

        if (k % 2 == 0) {
            for ( i = tempIndex - 1; i >= 0; i--) {
                result[index++] = temp[i];
            }
        } else {
            for ( i = 0; i < tempIndex; i++) {
                result[index++] = temp[i];
            }
        }
    }

    for ( i = 0; i < index; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int matrix[4][100] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int m = 4, n = 4;

    diagonalTraversal(matrix, m, n);

    return 0;
}

