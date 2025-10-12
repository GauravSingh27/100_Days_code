/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.*/
#include <stdio.h>

void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase string: %s", str);

    return 0;
}

