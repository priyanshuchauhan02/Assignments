#include <stdio.h>
main() {
    int a[100], n, i;
    int min, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize min and max with first element
    min = max = a[0];

    // Find min & max
    for(i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("\nMinimum element = %d", min);
    printf("\nMaximum element = %d\n", max);
}

