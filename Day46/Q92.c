/*Q92 (Strings)
Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>

char firstRepeatingChar(char str[]) {
    int count[26] = {0}; 
    int i = 0;


    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            return str[i];
        }
        i++;
    }
    return '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char result = firstRepeatingChar(str);
    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}

