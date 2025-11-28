/*Q150 (Enum)
Use pointer to struct to modify and display data using -> operator.*/
#include <stdio.h>
enum Day {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

struct Schedule {
    enum Day day;
    int hour;
    char task[50];
};

int main() {

    struct Schedule event = {MONDAY, 10, "C Programming Class"};
    
    struct Schedule *ptr = &event;

    printf("Original: Day=%d (%s), Hour=%d, Task=%s\n", 
           ptr->day, ptr->day == MONDAY ? "Monday" : "Other", ptr->hour, ptr->task);
    
    ptr->day = WEDNESDAY;
    ptr->hour = 14;
    snprintf(ptr->task, sizeof(ptr->task), "Data Structures Quiz");
    
    printf("Modified: Day=%d (%s), Hour=%d, Task=%s\n", 
           ptr->day, ptr->day == WEDNESDAY ? "Wednesday" : "Other", ptr->hour, ptr->task);
    
    return 0;
}

