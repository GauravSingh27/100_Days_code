/*Q140 (Enum)
Define a struct with enum Gender and print person's gender.*/
#include <stdio.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;

    // Assign values
    p1.gender = FEMALE;
    snprintf(p1.name, sizeof(p1.name), "Alice");

    printf("Name: %s\n", p1.name);
    printf("Gender: ");
    if (p1.gender == MALE) {
        printf("Male\n");
    } else if (p1.gender == FEMALE) {
        printf("Female\n");
    } else if (p1.gender == OTHER) {
        printf("Other\n");
    } else {
        printf("Unknown\n");
    }

    return 0;
}

