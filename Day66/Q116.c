/*Q116 (Logic Enhancers)
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs.
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target.
Assume exactly one solution exists and return the indices in any order.
Print the two indices separated by a space as output. If no solution exists, print "-1 -1".*/
#include <stdio.h>
int main() {
    int i,n,j, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d positive integers: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int found = 0;
    int iIndex = -1, jIndex = -1;
    
    for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                iIndex = i;
                jIndex = j;
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    
    if (found)
        printf("%d %d\n", iIndex, jIndex);
    else
        printf("-1 -1\n");
    
    return 0;
}

