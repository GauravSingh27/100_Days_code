/*Q149 (Enum)
Use malloc() to allocate structure memory dynamically and print details.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum Department {
    CS = 1,
    IT,
    EC
};

struct Student {
    int roll;
    char name[30];
    enum Department dept;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter roll: ");
    scanf("%d", &s->roll);

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter department (1-CS, 2-IT, 3-EC): ");
    int d;
    scanf("%d", &d);
    s->dept = (enum Department)d;

    printf("\nStudent details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);

    printf("Department: ");
    switch (s->dept) {
        case CS: printf("CS\n"); break;
        case IT: printf("IT\n"); break;
        case EC: printf("EC\n"); break;
        default: printf("Unknown\n");
    }

    free(s);  
    return 0;
}

