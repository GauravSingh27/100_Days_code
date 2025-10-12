/*Q97 (Strings)
Print the initials of a name.*/
#include <stdio.h>

void printInitials(char str[]) {
    int i = 0;
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - 32); 
        else
            printf("%c", str[i]);
    }
    i++;

    while (str[i] != '\0') {
        if (str[i] == ' ' && ((str[i+1] >= 'a' && str[i+1] <= 'z') || (str[i+1] >= 'A' && str[i+1] <= 'Z'))) {
            char ch = str[i + 1];
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32; 
            printf("%c", ch);
        }
        i++;
    }
    printf("\n");
}

int main() {
    char name[100];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    printInitials(name);

    return 0;
}

