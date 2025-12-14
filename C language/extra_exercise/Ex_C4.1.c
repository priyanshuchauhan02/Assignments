#include <stdio.h>

int main() {
    int a[10], i, max, min, j, temp;

    // Accept 10 integers
    for (i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Initialize max and min
    max = min = a[0];

    // Find maximum and minimum
    for (i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d\n", min);

    // Challenge: Sorting array in ascending order
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nArray in Ascending Order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

