#include <math.h>
#include <stdio.h>

int checkPrime(int _num) {
    int isPrime = 1;
    if (_num >= 2) {
        for (int i = 2; i <= sqrt(_num); i++) {
            if (_num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    } else {
        isPrime = 0;
    }

    return isPrime;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: \n");
    scanf("%d\n%d", &num1, &num2);

    printf("The prime numbers between %d and %d are:\n", num1, num2);
    for (int i = num1 + 1; i < num2; i++) {
        if (checkPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}