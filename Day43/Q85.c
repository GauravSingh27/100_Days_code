/*Q85 (Strings)
Reverse a string.*/
#include <stdio.h>

void reverseString(char str[]) {
    int start = 0, end = 0;
    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Move to last valid character index (before '\0')

    // Swap characters from start to end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed string: %s", str);

    return 0;
}

