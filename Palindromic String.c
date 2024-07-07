#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];  // Assuming the maximum length of the string can be 1000 as per usual constraints
    scanf("%s", S);  // Read the input string

    int len = strlen(S);  // Find the length of the string
    int is_palindrome = 1;  // Assume the string is a palindrome

    // Compare characters from start and end moving towards the center
    for(int i = 0; i < len / 2; i++) {
        if(S[i] != S[len - i - 1]) {
            is_palindrome = 0;  // If any characters do not match, it's not a palindrome
            break;
        }
    }

    // Print the result
    if(is_palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}