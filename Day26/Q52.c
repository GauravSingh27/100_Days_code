/*Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*                 */
#include <stdio.h>
int main() {
	int i,j;
    for (i = 0; i < 4; i++) { // Loop for 2 rows
        for (j = 0; j < 2*i-1; j++) { // Loop for 7 stars in each row
            printf("* \n");
        }
        printf("\n"); // Move to the next line after each row
    }
    
    for(i = 0; i < 3; i++){
    	printf("*\n");
	}
	printf("\n");
	printf("*");
	
 return 0;
}


