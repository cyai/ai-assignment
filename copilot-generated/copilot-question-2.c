/*
Write a C program to perform modular exponentiation of two numbers x and y modulo m. 
(Compute (x^y) % m efficiently using the repeated squaring method).
*/
#include <stdio.h>

int modular_exponentiation(int x, int y, int m) {
    int result = 1;
    x = x % m;

    while (y > 0) {
        if (y & 1) {
            result = (result * x) % m;
        }
        y = y >> 1;
        x = (x * x) % m;
    }

    return result;
}

int main() {
    int x, y, m;
    printf("Enter the values of x, y and m: ");
    scanf("%d %d %d", &x, &y, &m);

    printf("(%d^%d) %% %d = %d\n", x, y, m, modular_exponentiation(x, y, m));

    return 0;
}
