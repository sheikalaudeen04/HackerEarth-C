#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int countZ = 0, countO = 0;

    // Read the input word
    scanf("%s", word);

    // Count the number of Zs and Os
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'Z' || word[i] == 'z') {
            countZ++;
        } else if (word[i] == 'O' || word[i] == 'o') {
            countO++;
        }
    }

    // Check if the number of Os is twice the number of Zs
    if (countO == 2 * countZ) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
