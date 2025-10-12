/*Q91 (Strings)
Remove all vowels from a string.*/
#include <stdio.h>

int isVowel(char ch) {
    char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

void removeVowels(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeVowels(str);

    printf("String after removing vowels: %s", str);

    return 0;
}

