#include <stdio.h>
main() {
    char str[200];
    int i, words = 0, len = 0, maxLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            len++;
        }
        else {
            words++;
            if (len > maxLen)
                maxLen = len;
            len = 0;
        }
    }

    // Last word check
    if (len > 0) {
        words++;
        if (len > maxLen)
            maxLen = len;
    }

    printf("\nNumber of words = %d", words);
    printf("\nLength of longest word = %d", maxLen);
}

