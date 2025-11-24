/*Q144 (Enum)
Write a function that accepts a structure as parameter and prints its members.*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
void printStudent(struct Student *p) {
    printf("Roll : %d\n", p->roll);
    printf("Name : %s\n", p->name);
    printf("Marks: %.2f\n", p->marks);
}

int main() {
    struct Student st = {2, "Anita", 92.0};

    printStudent(&st); 

    return 0;
}

