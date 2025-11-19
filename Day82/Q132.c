/*Q132 (Enum)
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/
#include <stdio.h>
enum traffic_light { RED, YELLOW, GREEN };

int main() {
    enum traffic_light signal = RED; 

    switch(signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }
    return 0;
}

