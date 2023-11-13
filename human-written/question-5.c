#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int p = b;
        b = a % b;
        a = p;
    }
    return a;
}

int isCoprime(int a, int b) { return gcd(a, b) == 1; }

int main() {
    int m, n;

    printf("Enter the start of the range: ");
    scanf("%d", &m);

    printf("Enter the end of the range: ");
    scanf("%d", &n);

    printf("Coprime pairs in the range (%d, %d):\n", m, n);
    for (int i = m; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (isCoprime(i, j)) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}