#include <stdio.h>

/* Function to reverse string without using string functions */
void reverseString(char str[]) {
    int i, len = 0;
    char temp;

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // Reverse logic
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed String: %s", str);
}

