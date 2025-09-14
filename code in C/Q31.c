/*Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2); 
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary representation of %d is: ", number);
    if (number == 0) {
        printf("0");
    } else {
        printBinary(number);
    }
    printf("\n");

    return 0;
}
