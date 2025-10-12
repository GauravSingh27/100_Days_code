/*Q96 (Strings)
Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char str[]) {
    int i = 0, start = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    reverseWord(str, start, i - 1);
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    reverseEachWord(sentence);

    printf("Sentence after reversing each word:\n%s", sentence);

    return 0;
}

