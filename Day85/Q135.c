/*Q135 (Enum)
Assign explicit values starting from 10 and print them.*/
#include <stdio.h>
enum Numbers {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH
};

int main() {
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}

