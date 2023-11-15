/*
Write a program to check if two given numbers are coprime or not.
*/
#include <stdio.h>

int main() {
    int num1, num2, i, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int smaller_num = num1 < num2 ? num1 : num2;

    for (i = 2; i <= smaller_num; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
            break;
        }
    }

    if (gcd == 1) {
        printf("%d and %d are coprime.\n", num1, num2);
    } else {
        printf("%d and %d are not coprime. Common divisor: %d\n", num1, num2,
               gcd);
    }

    return 0;
}

/*
Intrepretation:

The above code is generated to check if two numbers are coprime or not. It dosenot uses any funtions so it would be hard to reuse the aspects of this program into some other program using file management. Also the uses ternary operator to find the smaller number. It could have used the if else statement to find the smaller number. It does go with optimal code with using ternary operator but also fails to use funtions to make the code more readable and reusable.
*/