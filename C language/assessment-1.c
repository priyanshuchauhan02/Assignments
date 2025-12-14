#include <stdio.h>
main() {
    int choice, qty;
    char more;
    float total = 0;

    do {
        /* Display Menu */
        printf("\n----- FOOD MENU -----\n");
        printf("1. Burger   - Rs.100\n");
        printf("2. Pizza    - Rs.250\n");
        printf("3. Sandwich - Rs.80\n");
        printf("4. Coffee   - Rs.60\n");
        printf("---------------------\n");

        /* Take user choice */
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        /* Calculate bill using if-else */
        if (choice == 1) {
            total = total + (100 * qty);
        }
        else if (choice == 2) {
            total = total + (250 * qty);
        }
        else if (choice == 3) {
            total = total + (80 * qty);
        }
        else if (choice == 4) {
            total = total + (60 * qty);
        }
        else {
            printf("Invalid choice!\n");
        }

        /* Ask for more order */
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    /* Display final bill */
    printf("\n----- FINAL BILL -----\n");
    printf("Total Amount = Rs. %.2f\n", total);
    printf("Thank you! Visit again.\n");

}

