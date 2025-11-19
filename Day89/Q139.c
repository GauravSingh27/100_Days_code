/*Q139 (Enum)
Show that enums store integers by printing assigned values.*/
#include <stdio.h>
enum Colors {
    RED = 5,
    GREEN = 10,
    BLUE = 15
};

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);

    return 0;
}

