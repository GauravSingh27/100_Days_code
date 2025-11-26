/*Q146 (Enum)
Create Employee structure with nested Date structure for joining date and print details.*/
#include <stdio.h>
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int empId;
    char name[50];
    Date joiningDate;
} Employee;

void printEmployee(Employee emp) {
    printf("Employee ID: %d\n", emp.empId);
    printf("Name: %s\n", emp.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}

int main() {
    Employee emp1 = {101, "John Doe", {15, 6, 2022}};
    printEmployee(emp1);
    return 0;
}


