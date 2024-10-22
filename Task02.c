#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, num_guesses = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        num_guesses++;

        if (guess < secret_number) {
            printf("Too low! Try again.\n");
        } else if (guess > secret_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", num_guesses);
        }
    } while (guess != secret_number);

    return 0;
}
