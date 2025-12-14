#include <stdio.h>

/* Function to check Armstrong number */
int isArmstrong(int num) {
    int temp = num, sum = 0, digit;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong Number\n", n);
    else
        printf("%d is not an Armstrong Number\n", n);

    // Challenge: Armstrong numbers between 1 and 1000
    printf("\nArmstrong Numbers between 1 and 1000:\n");
    for (i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
}

