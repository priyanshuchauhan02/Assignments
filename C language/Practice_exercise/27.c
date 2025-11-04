#include <stdio.h>
main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;   
    while(num >= 10) {
        num = num / 10;
    }
    first = num;
    printf("\nFirst digit = %d", first);
    printf("\nLast digit = %d\n", last);
    printf("\nSum of first and last digit = %d", first + last);
   
}
