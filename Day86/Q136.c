/*Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/
#include <stdio.h>
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum MenuChoice choice;
    int a, b, result;

    a = 10;
    b = 5;

    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", (int *)&choice);

    switch(choice) {
        case ADD:
            result = a + b;
            printf("Addition: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Subtraction: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Multiplication: %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

