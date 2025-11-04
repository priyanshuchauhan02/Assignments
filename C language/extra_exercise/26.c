#include <stdio.h>
main() {
    int base, exp, i, power = 1;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for(i = 1; i <= exp; i++) {
        power = power * base;
    }
    printf("%d raised to the power %d = %d\n", base, exp, power);
}

