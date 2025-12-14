#include <stdio.h>
main() {
    int a[100], n, i;
    int sum = 0;
    float avg;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // Calculate average
    avg = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

}

