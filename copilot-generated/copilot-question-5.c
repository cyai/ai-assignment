/*
Write a program to check if two numbers are coprime using the Euclidean algorithm to find the greatest common divisor (GCD). 
Print pairs of coprimes between a given range.
*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int coprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int start, end;
    printf("Enter the range of numbers to check for coprimes: ");
    scanf("%d %d", &start, &end);

    printf("Pairs of coprime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (coprime(i, j)) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}

/*
Intrepretation:

The generated code is correct. The code is not very efficient, but it is correct. It dose not follow the standard function and variable naming structure. It tries to go with the optimal code rather than optimal user exprience.
*/