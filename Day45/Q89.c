/*Q89 (Strings)
Count frequency of a given character in a string.*/
#include <stdio.h>

int countFrequency(char str[], char ch) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int freq = countFrequency(str, ch);
    printf("Frequency of '%c' is %d\n", ch, freq);

    return 0;
}

