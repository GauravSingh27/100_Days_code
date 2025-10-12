/*Q81 (Strings)
Count characters in a string without using built-in length functions.*/
#include <stdio.h>

int countCharacters(char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
   
    int length = countCharacters(str);
    if(length > 0 && str[length - 1] == '\n') {
        length--;  
    }
    printf("Number of characters: %d\n", length);
    return 0;
}

