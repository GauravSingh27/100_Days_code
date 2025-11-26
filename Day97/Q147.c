/*Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread().*/
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int empId;
    char name[50];
    int age;
} Employee;

void writeEmployees(const char *filename, Employee *arr, int n) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        perror("Failed to open file for writing");
        exit(1);
    }
    fwrite(arr, sizeof(Employee), n, fp);
    fclose(fp);
}

void readEmployees(const char *filename, Employee *arr, int n) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        perror("Failed to open file for reading");
        exit(1);
    }
    fread(arr, sizeof(Employee), n, fp);
    fclose(fp);
}

int main() {
    Employee employees[2] = {
        {101, "Alice", 30},
        {102, "Bob", 28}
    };
    const char *filename = "employees.dat";

    writeEmployees(filename, employees, 2);

    Employee readArr[2];
    readEmployees(filename, readArr, 2);

    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", readArr[i].empId, readArr[i].name, readArr[i].age);
    }
    return 0;
}

