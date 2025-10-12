/*Q100 (Strings)
Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>
void printSubstrings(char str[]) {
    int length = strlen(str);
    int start;
    int end,k;
    for ( start = 0; start < length; start++) {
        for ( end = start; end < length; end++) {
            for ( k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("All substrings of the string:\n");
    printSubstrings(str);

    return 0;
}

