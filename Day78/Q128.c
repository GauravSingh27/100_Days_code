/*Q128 (File Handling)
Read a text file and count how many vowels and consonants are in the file.
Ignore digits and special characters.*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    file = fopen("input.txt", "r"); 
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {  
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

