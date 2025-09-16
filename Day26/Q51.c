/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>
int main()
{
    int n = 5,i,j; 
for(i = 0; i < n; i++) {
    for (j = n - i; j <= n; j++) {
    printf("%d", j);
    }
    printf("\n");
    }

    return 0;
}

