#include <stdio.h>
int main() {
    int a;
    int b;
    int n;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:");
    scanf("%d", &b);
    if (a > b) {
        n = a;
    } else {
        n = b;
    }
    int gcd = 0;
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d.", a, b, gcd);
}
