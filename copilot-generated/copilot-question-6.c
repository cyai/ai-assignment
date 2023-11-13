/*
Write a C program to find Euler's totient function phi(n) for a given number n. 
Phi(n) is the number of integers less than n that are coprime to n.

*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int phi(int n) {
    int result = 1;
    for (int i = 2; i < n; i++) {
        if (gcd(i, n) == 1) {
            result++;
        }
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("phi(%d) = %d\n", n, phi(n));
    return 0;
}
