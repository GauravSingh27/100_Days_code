/*Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
int main() {
    unsigned long long binary, onesComplement = 0, place = 1;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%llu", &binary);

    while (binary != 0) {
        int digit = binary % 10; 
        if (digit == 0) {
            onesComplement += 1 * place; 
        }
        
        binary /= 10;
        place *= 10;
    }

    printf("1's complement: %llu\n", onesComplement);

    return 0;
}

