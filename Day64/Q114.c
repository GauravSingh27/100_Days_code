/*Q114 (Logic Enhancers)
Write a program to take a string s as input.
The task is to find the length of the longest substring without repeating characters.
Print the length as output.*/
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char s[]) {
    int n = strlen(s);
    int lastIndex[256];
    int maxLen = 0;
    int start = 0;
    int i,end;
    for ( i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for ( end = 0; end < n; end++) {
        if (lastIndex[(unsigned char)s[end]] >= start) {
            start = lastIndex[(unsigned char)s[end]] + 1;
        }

        lastIndex[(unsigned char)s[end]] = end;
        int currentLen = end - start + 1;

        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    return maxLen;
}

int main() {
    char s[200];

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int result = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", result);

    return 0;
}


