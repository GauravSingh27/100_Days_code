/*Q93 (Strings)
Check if two strings are anagrams of each other.*/
#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; 
    int i = 0;

    while (str1[i] != '\0') {
        count[(unsigned char)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        count[(unsigned char)str2[i]]--;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1; 
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    if (areAnagrams(str1, str2))
        printf("Strings are anagrams.\n");
    else
        printf("Strings are not anagrams.\n");

    return 0;
}

