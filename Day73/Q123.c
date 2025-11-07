/*Q123 (File Handling)
Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;  

        if (ch == '\n') {
            lines++;  
        }

        if (isspace(ch)) {
            in_word = 0;  
        } else {
            if (in_word == 0) {
                words++;  
                in_word = 1;
            }
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

