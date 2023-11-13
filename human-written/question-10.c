#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int common_divisor = gcd(num1, num2);

    if (common_divisor == 1) {
        printf("%d and %d are coprime numbers.\n", num1, num2);
    } else {
        printf("%d and %d are not coprime numbers. (GCD = %d)\n", num1, num2,
               common_divisor);
    }

    return 0;
}
