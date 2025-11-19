/*Q138 (Enum)
Print all enum names and integer values using a loop.*/
#include <stdio.h>
enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2,
    MAX_STATUS 
};

int main() {
    const char *statusNames[] = { "SUCCESS", "FAILURE", "TIMEOUT" };
    enum Status s;

    for (s = SUCCESS; s < MAX_STATUS; s++) {
        printf("%s = %d\n", statusNames[s], s);
    }

    return 0;
}

