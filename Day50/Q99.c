/*Q99 (Strings)
Change the date format from dd/04/yyyy to dd-Apr-yyyy.*/
#include <stdio.h>

void changeDateFormat(char date[]) {
    char day[3], month[3], year[5];
    sscanf(date, "%2[^/]/%2[^/]/%4s", day, month, year);

   
    if (month[0] == '0' && month[1] == '4') {
        printf("%s-Apr-%s\n", day, year);
    } else {
        
        printf("Date not in expected month '04'. Original date: %s\n", date);
    }
}

int main() {
    char date[20];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    int i = 0;
    while (date[i] != '\0') {
        if (date[i] == '\n') {
            date[i] = '\0';
            break;
        }
        i++;
    }

    changeDateFormat(date);

    return 0;
}

