#include <stdio.h>

int main() {
    int start, end, a, b, c, d, count = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Pythagorean quadruples between %d and %d are:\n", start, end);

    for (a = start; a <= end; a++) {
        for (b = a; b <= end; b++) {
            for (c = b; c <= end; c++) {
                for (d = c; d <= end; d++) {
                    if (a * a + b * b == c * c + d * d) {
                        printf("(%d, %d, %d, %d)\n", a, b, c, d);
                        count++;
                    }
                }
            }
        }
    }

    printf("Total number of Pythagorean quadruples: %d\n", count);

    return 0;
}
