/*Q88 (Strings)
Replace spaces with hyphens in a string.*/
#include <stdio.h>

void replaceSpaces(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    replaceSpaces(str);

    printf("String after replacing spaces with hyphens:\n%s", str);

    return 0;
}

