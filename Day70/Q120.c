/*Q120 (Logic Enhancers)
Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char sentence[200];
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    int capitalizeNext = 1; 
    int i;
    for ( i = 0; sentence[i] != '\0'; i++) {
        if (capitalizeNext && isalpha(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
            capitalizeNext = 0;
        } else {
            sentence[i] = tolower(sentence[i]);
        }
        if (sentence[i] == '.' || sentence[i] == '!' || sentence[i] == '?') {
            capitalizeNext = 1;
        }
    }

    printf("Sentence case: %s\n", sentence);
    return 0;
}

