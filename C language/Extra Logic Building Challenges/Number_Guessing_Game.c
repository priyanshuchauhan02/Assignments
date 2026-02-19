#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    const int maxAttempts = 5;

    // Generate random number
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");
    printf("You have %d attempts\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed correctly in %d attempts.\n", attempts);
            return 0;
        }
        else if (guess > number) {
            printf("Too high!\n");
        }
        else {
            printf("Too low!\n");
        }
    }

    printf("\nSorry! You've used all attempts.");
    printf("\nThe correct number was: %d\n", number);

    return 0;
}

