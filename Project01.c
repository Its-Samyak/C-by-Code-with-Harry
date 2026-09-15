#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, attempts = 0;

    srand(time(NULL));           // Seed the random number generator
    secret = rand() % 100 + 1;   // Random number between 1 and 100

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret)
        {
            printf("Too high! Try again.\n\n");
        }
        else if (guess < secret)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != secret);

    return 0;
}