/*Q95 (Strings)
Check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>

int isSubstring(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    int i;
    if (len2 > len1) return 0;

    for ( i = 0; i <= len1 - len2; i++) {
        int j = 0;
        while (j < len2 && str1[i + j] == str2[j]) {
            j++;
        }
        if (j == len2) return 1;
    }
    return 0;
}


int isRotation(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) return 0;

    int i;
    char str1str1[200];
    for ( i = 0; i < len1; i++) {
        str1str1[i] = str1[i];
        str1str1[i + len1] = str1[i];
    }
    str1str1[len1 * 2] = '\0';

    return isSubstring(str1str1, str2);
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

    if (isRotation(str1, str2))
        printf("'%s' is a rotation of '%s'\n", str2, str1);
    else
        printf("'%s' is not a rotation of '%s'\n", str2, str1);

    return 0;
}

