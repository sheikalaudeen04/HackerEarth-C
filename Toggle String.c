#include <stdio.h>
#include <ctype.h>  // For toupper and tolower functions

int main() {
    char S[1001];  // Assuming the maximum length of the string can be 1000 as per usual constraints
    scanf("%s", S);  // Read the input string

    // Iterate through each character in the string
    for(int i = 0; S[i] != '\0'; i++) {
        if(islower(S[i])) {
            S[i] = toupper(S[i]);  // Convert lowercase to uppercase
        } else if(isupper(S[i])) {
            S[i] = tolower(S[i]);  // Convert uppercase to lowercase
        }
    }

    printf("%s\n", S);  // Print the resultant string

    return 0;
}