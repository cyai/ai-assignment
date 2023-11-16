#include <stdbool.h>
#include <stdio.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void find_primes_between(int start, int end) {
    for (int number = (start > 2 ? start : 2); number <= end; number++) {
        if (is_prime(number)) {
            printf("%d is prime\n", number);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    if (start > end) {
        printf(
            "Start number should be less than or equal to the end number.\n");
    } else {
        printf("Prime numbers between %d and %d are:\n", start, end);
        find_primes_between(start, end);
    }

    return 0;
}

/*
Intrepretation:

The generated code is more general and asks for the value of n. The human written code is more specific and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order. The generated code is more readable and asks for the value of n in a specific order.
*/