#include <stdio.h>
main() {
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // Reads full line

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {

            // Check vowels
            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if (str[i] != ' ') {
            special++;
        }
    }

    printf("\nVowels = %d", vowels);
    printf("\nConsonants = %d", consonants);
    printf("\nDigits = %d", digits);
    printf("\nSpecial Characters = %d", special);
}

