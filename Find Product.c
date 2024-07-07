#include <stdio.h>

#define MODULO 1000000007

int main() {
    int N;
    scanf("%d", &N);
    
    long long int product = 1; // Initialize product to 1
    
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        product = (product * num) % MODULO; // Multiply and take modulo
    }
    
    printf("%lld\n", product); // Print the final product modulo 10^9 + 7
    
    return 0;
}
