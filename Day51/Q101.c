/*Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated.
You need to print the first and last occurrence of the target and print the index of first and last occurrence.
Print -1, -1 if the target is not present.*/
#include <stdio.h>
int firstOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int lastOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int size, target;
    printf("Enter size of the sorted array: ");
    scanf("%d", &size);
    int i;
    int nums[size];
    printf("Enter %d sorted elements (can be repeated): ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target to find: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, size, target);
    int last = lastOccurrence(nums, size, target);

    if (first == -1 && last == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    }

    return 0;
}

