/*Q148 (Enum)
Take two structs as input and check if they are identical.*/
#include <stdio.h>
#include <string.h>
typedef struct {
    int id;
    char name[30];
    int age;
} Employee;

void inputEmployee(Employee *emp) {
    printf("Enter ID: ");
    scanf("%d", &emp->id);
    printf("Enter name: ");
    scanf(" %[^\n]s", emp->name);  
    printf("Enter age: ");
    scanf("%d", &emp->age);
}

int compareEmployees(Employee e1, Employee e2) {
    if (e1.id == e2.id &&
        strcmp(e1.name, e2.name) == 0 &&
        e1.age == e2.age) {
        return 1;  
    }
    return 0;  
}

int main() {
    Employee emp1, emp2;
    printf("Enter details for employee 1:\n");
    inputEmployee(&emp1);
    printf("Enter details for employee 2:\n");
    inputEmployee(&emp2);

    if (compareEmployees(emp1, emp2)) {
        printf("Both employees are identical.\n");
    } else {
        printf("Employees are not identical.\n");
    }
    return 0;
}

