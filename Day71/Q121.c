/*Q121 (File Handling)
Write a C program that creates a text file named info.txt in write mode.
The program should take the user’s name and age as input, and write them to the file using fprintf().
After writing, display a message confirming that the data was successfully saved.*/
#include <stdio.h>
int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("Data has been successfully saved to info.txt\n");

    return 0;
}

