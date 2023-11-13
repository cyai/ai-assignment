/*
 Write a program to find all prime factors of a given number using the sieve of Eratosthenes method.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n, bool prime[]) {
    // Initialize all numbers as prime
    for (int i = 2; i <= n; i++) {
        prime[i] = true;
    }

    // Mark all multiples of primes as non-prime
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
}

void primeFactors(int n) {
    bool prime[n + 1];
    sieveOfEratosthenes(n, prime);

    // Find prime factors of n
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            while (n % i == 0) {
                printf("%d ", i);
                n /= i;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    primeFactors(n);

    return 0;
}
