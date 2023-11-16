#include <stdbool.h>
#include <stdio.h>

void sieveOfEratosthenes(int n) {
    bool prime[n + 1];

    // Initialize all numbers as prime
    for (int i = 2; i <= n; i++) prime[i] = true;

    // Apply Sieve of Eratosthenes algorithm
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            // Mark multiples of p as non-prime
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }

    // Print prime numbers within the range
    printf("Prime numbers in the range 2 to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int limit;
    printf("Enter the upper limit for finding prime numbers: ");
    scanf("%d", &limit);

    sieveOfEratosthenes(limit);

    return 0;
}