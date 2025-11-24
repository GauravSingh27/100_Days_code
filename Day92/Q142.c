/*Q142 (Enum)
Store details of 5 students in an array of structures and print all.*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students (roll, name, marks):\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);     
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDetails of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

