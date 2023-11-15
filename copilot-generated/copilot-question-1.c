/*
Write a program to find all Pythagorean quadruples between two given numbers. (A Pythagorean
quadruple (a, b, c, d) satisfies the equation a^2 + b^2 = c^2 + d^2).
*/


#include <stdio.h>

int main() {
    int a, b, c, d;
    int start = 1, end = 100; // change these values to set the range

    for (a = start; a <= end; a++) {
        for (b = start; b <= end; b++) {
            for (c = start; c <= end; c++) {
                for (d = start; d <= end; d++) {
                    if (a*a + b*b == c*c + d*d) {
                        printf("(%d, %d, %d, %d)\n", a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}


/*
Interpretation:

This generation is written for a general case senario where the range of the numbers is not known. This could be handelled by proper prompt enginnering. It assusmes the start and end values are 1 and 100 respectively. While the one written by the teammate is more specific and asks for the range of the numbers. 
*/