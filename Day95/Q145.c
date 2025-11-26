/*Q145 (Enum)
Return a structure containing top student's details from a function.*/
#include <stdio.h>
enum Subject { MATH, SCIENCE, ENGLISH };

typedef struct {
    int roll;
    char name[30];
    int marks[3];
} Student;

Student findTopStudent(Student arr[], int n) {
    int max_total = -1;
    int top_idx = 0;
    for (int i = 0; i < n; i++) {
        int total = arr[i].marks[MATH] + arr[i].marks[SCIENCE] + arr[i].marks[ENGLISH];
        if (total > max_total) {
            max_total = total;
            top_idx = i;
        }
    }
    return arr[top_idx];  
}

int main() {
    Student students[] = {
        {1, "Alice", {85, 90, 88}},
        {2, "Bob", {78, 92, 91}},
        {3, "Charlie", {88, 85, 92}},
    };
    int n = sizeof(students) / sizeof(students[0]);
    Student topStudent = findTopStudent(students, n);
    printf("Top Student: Roll: %d, Name: %s\n", topStudent.roll, topStudent.name);
    printf("Marks: Math=%d, Science=%d, English=%d\n",
           topStudent.marks[MATH], topStudent.marks[SCIENCE], topStudent.marks[ENGLISH]);
    return 0;
}

