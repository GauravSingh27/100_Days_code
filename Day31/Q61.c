/*Q61 (Arrays (1D))
Search for an element in an array using linear search.*/
#include <stdio.h>
int i;
int linearSearch(int arr[], int n, int key) {
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);

    if (result == -1)
        printf("Key Not Found\n");
    else
        printf("Key Found at Index: %d\n", result);

    return 0;
}

