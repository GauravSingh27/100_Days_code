/*Q143 (Enum)
Find and print the student with the highest marks.*/
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i, maxIndex = 0;

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

    maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Roll : %d\n", s[maxIndex].roll);
    printf("Name : %s\n", s[maxIndex].name);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}

