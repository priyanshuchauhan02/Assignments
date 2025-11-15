#include <stdio.h>
main() {
    int temp;

    printf("\nEnter the temperature in degree Celsius: ");
    scanf("%d", &temp);

    if (temp < 20) {
        printf("\nIt is Cold.");
    } 
    else if (temp >= 20 && temp < 30) {
        printf("\nIt is Warm.");
    } 
    else if (temp >= 30 && temp < 40) {
        printf("\nIt is Hot.");
    } 
    else {
        printf("\nIt is Very Hot.");
    }
}

