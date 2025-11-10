#include <stdio.h>
main() {
    int n=4, i, j, num = 1, k;

    for (i = 0; i < n; i++) {
        // Print spaces
        for (k = 1; k <= n - i; k++)
            printf("  ");

        // Print numbers
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
            printf("%4d", num);
        }
        printf("\n");
    }
}

