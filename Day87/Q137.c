/*Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    role = USER;

    if (role == ADMIN) {
        printf("Welcome, Admin! You have full access.\n");
    } else if (role == USER) {
        printf("Welcome, User! You have limited access.\n");
    } else if (role == GUEST) {
        printf("Welcome, Guest! You have guest access.\n");
    } else {
        printf("Unknown role.\n");
    }

    return 0;
}

