#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findModuloInverse(int a, int m) {
    for (int i = 1; i < m; i++) {
        if ((a * i) % m == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num, mod;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the modulo: ");
    scanf("%d", &mod);

    if (gcd(num, mod) != 1) {
        printf("Inverse doesn't exist since %d and %d are not coprime.\n", num, mod);
    } else {
        int inverse = findModuloInverse(num, mod);
        if (inverse == -1) {
            printf("Inverse doesn't exist.\n");
        } else {
            printf("The modulo multiplicative inverse of %d under modulo %d is: %d\n", num, mod, inverse);
        }
    }

    return 0;
}
