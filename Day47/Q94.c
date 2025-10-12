/*Q94 (Strings)
Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longestWord[100] = "";
    char currentWord[100];
    int maxLength = 0, length = 0, i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i];
        } else {
            if (j > 0) {
                currentWord[j] = '\0';
                length = j;
                if (length > maxLength) {
                    maxLength = length;
                    strcpy(longestWord, currentWord);
                }
                j = 0;
            }
        }
        i++;
    }

    if (j > 0) {
        currentWord[j] = '\0';
        length = j;
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, currentWord);
        }
    }

    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", maxLength);

    return 0;
}

