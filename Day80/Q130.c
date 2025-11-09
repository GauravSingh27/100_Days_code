/*Q130 (File Handling)
Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.*/
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file;
    struct Student students[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%49s", students[i].name);
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }
    for(i = 0; i < 3; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
    fclose(file);

    printf("\nStudent records saved to file.\n");
    
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while(fscanf(file, "%49s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file);
    return 0;
}

