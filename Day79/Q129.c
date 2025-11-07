/*Q129 (File Handling)
A file numbers.txt contains a list of integers separated by spaces.
Read all integers, compute their sum and average, and print both.*/
#include <stdio.h>
int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No integers found in file.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}

