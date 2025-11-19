/*Q133 (Enum)
Create an enum for months and print how many days each month has.*/
#include <stdio.h>

enum Months {
    January = 31,
    February = 28,
    March = 31,
    April = 30,
    May = 31,
    June = 30,
    July = 31,
    August = 31,
    September = 30,
    October = 31,
    November = 30,
    December = 31
};

int main() {
    enum Months month;
    printf("Month\t\tDays\n");
    printf("January\t\t%d\n", January);
    printf("February\t%d\n", February);
    printf("March\t\t%d\n", March);
    printf("April\t\t%d\n", April);
    printf("May\t\t%d\n", May);
    printf("June\t\t%d\n", June);
    printf("July\t\t%d\n", July);
    printf("August\t\t%d\n", August);
    printf("September\t%d\n", September);
    printf("October\t\t%d\n", October);
    printf("November\t%d\n", November);
    printf("December\t%d\n", December);

    return 0;
}

