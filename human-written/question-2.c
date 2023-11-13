#include <stdio.h>

int mod_exp(int _x, int _y, int _m) {
    int ans = 1;
    _x = _x % _m;

    while (_y > 0) {
        if (_y & 1) {
            ans = (ans * _x) % _m;
        }
        _y = _y >> 1;
        _x = (_x * _x) % _m;
    }

    return ans;
}

int main() {
    int x, y, m;

    printf("Enter base (x): \n");
    scanf("%d", &x);
    printf("Enter exponent (y): \n");
    scanf("%d", &y);
    printf("Enter modulo (m): \n");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Modulo should be a positive number.\n");
    } else {
        printf("Result of (%d^%d) %% %d is %d\n", x, y, m, mod_exp(x, y, m));
    }

    return 0;
}
