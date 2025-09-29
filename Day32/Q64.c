/*Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>

int mostFrequentDigit(int num) {
    int freq[10] = {0};  
    
    if (num < 0) num = -num;  

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = freq[0];
    int maxDigit = 0;

    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }
    
    return maxDigit;
}

int main() {
    int number = 1223355;
    int result = mostFrequentDigit(number);
    printf("Digit that occurs most frequently: %d\n", result);
    return 0;
}

