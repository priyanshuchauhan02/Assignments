#include <stdio.h>
#include <string.h>

/* Function to check palindrome number */
int isNumberPalindrome(int num) {
    int rev = 0, temp = num;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev == num)
        return 1;
    else
        return 0;
}

/* Function to check palindrome string */
int isStringPalindrome(char str[]) {
    int i, len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

main() {
    int num, choice;
    char str[100];

    printf("PALINDROME CHECK PROGRAM\n");
    printf("1. Check Number Palindrome\n");
    printf("2. Check String Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num))
            printf("Result: Palindrome Number");
        else
            printf("Result: Not a Palindrome Number");
    }
    else if (choice == 2) {
        printf("Enter a string: ");
        scanf("%s", str);

        if (isStringPalindrome(str))
            printf("Result: Palindrome String");
        else
            printf("Result: Not a Palindrome String");
    }
    else {
        printf("Invalid Choice");
    }
}

