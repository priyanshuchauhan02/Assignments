#include <stdio.h>

// Recursive factorial function
long long factRec(int n) {
    if (n == 0)
        return 1;
    return n * factRec(n - 1);
}

// Iterative factorial function
long long factIter(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nFactorial (Recursive) = %lld", factRec(n));
    printf("\nFactorial (Iterative) = %lld", factIter(n));

}

