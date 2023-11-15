/*
Write a C program to find the Least Common Multiple (LCM) of two given numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        ++max;
    }
    return 0;
}


/*
Intrepretation:

This code uses the brute force method to find the LCM of two numbers. It is not the most efficient way to find the LCM of two numbers. The code might fall into infinite loop and could run forever. Also it takes the numbers at once and dose not handel edge cases such as if the user enters a character instead of a number or weather the number is negative or positive.
*/