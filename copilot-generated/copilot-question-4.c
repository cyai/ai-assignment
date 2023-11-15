/*
Write a program to find the modulo multiplicative inverse of two numbers using the extended Euclidean algorithm.
*/
#include <stdio.h>

int extended_euclidean_algorithm(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extended_euclidean_algorithm(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int modulo_multiplicative_inverse(int a, int m) {
    int x, y;
    int gcd = extended_euclidean_algorithm(a, m, &x, &y);

    if (gcd != 1) {
        printf("Inverse doesn't exist\n");
        return -1;
    } else {
        int result = (x % m + m) % m;
        return result;
    }
}

int main() {
    int a, m;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &m);

    int result = modulo_multiplicative_inverse(a, m);

    if (result != -1) {
        printf("The modulo multiplicative inverse of %d and %d is %d\n", a, m, result);
    }

    return 0;
}

/*
Interpretation:

Both the human-written and AI-generated codes find the modulo multiplicative inverse, but they approach the problem differently. The AI code uses a more complex method, employing the extended Euclidean algorithm with recursion and addressing the zero situation. It includes a GCD check for coprimality. On the other hand, the human-written code is simpler, using a loop-based strategy with an explicit coprimality check, but it doesn't handle the zero situation specifically. The AI code's complexity might boost performance, whereas the human-written code prioritizes readability and simplicity.
*/