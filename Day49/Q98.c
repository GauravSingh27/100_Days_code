/*Q98 (Strings)
Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>

void printInitialsWithSurname(char name[]) {
    int length = strlen(name);
    int i;
    if (name[length - 1] == '\n') {
        name[length - 1] = '\0';
        length--;
    }

    int lastSpace = -1;
    for ( i = length - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", (name[i] >= 'a' && name[i] <= 'z') ? name[i] - 32 : name[i]);
        } else if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", (name[i + 1] >= 'a' && name[i + 1] <= 'z') ? name[i + 1] - 32 : name[i + 1]);
        }
    }

    if (lastSpace != -1) {
        printf("%s\n", &name[lastSpace + 1]);
    } else {
        
        printf("%s\n", name);
    }
}

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printInitialsWithSurname(name);

    return 0;
}

