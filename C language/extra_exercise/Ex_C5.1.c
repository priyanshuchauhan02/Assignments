#include <stdio.h>

// Recursive function to find Fibonacci number
int fibRec(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibRec(n - 1) + fibRec(n - 2);
}

// Iterative function to find Fibonacci number
int fibIter(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series (Recursive):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibRec(i));
    }

    printf("\n\nNth Fibonacci using Iterative = %d", fibIter(n - 1));
    printf("\nNth Fibonacci using Recursive = %d", fibRec(n - 1));

}

