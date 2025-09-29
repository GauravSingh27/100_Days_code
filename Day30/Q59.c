/*Q59 (Arrays (1D))
Count even and odd numbers in an array.*/
#include <stdio.h>

int main() 
{
    int arr[] = {5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0, oddCount = 0;
int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}

