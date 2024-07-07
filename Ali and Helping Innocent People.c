#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
}

bool isEvenSumOfConsecutiveDigits(const char *s) {
    // Check pairs of consecutive digits in the format "DDXDDD-DD"
    return ((s[0] + s[1]) % 2 == 0) &&
           ((s[3] + s[4]) % 2 == 0) &&
           ((s[4] + s[5]) % 2 == 0) &&
           ((s[7] + s[8]) % 2 == 0);
}

int main() {
    char tag[11]; // Extra space for null terminator
    scanf("%s", tag);

    if (isVowel(tag[2])) {
        printf("invalid\n");
        return 0;
    }

    if (isEvenSumOfConsecutiveDigits(tag)) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}
