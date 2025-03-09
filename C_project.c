#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Number\n");
    random = rand() % 100 + 1;

    do {
        printf("\nPlease enter your Guess Number between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random) {
            printf("Guess a larger Number\n");
        } else if (guess > random) {
            printf("Guess a smaller Number\n");
        } else {
            printf("Congratulations!!! You have successfully guessed the Number in %d attempts", no_of_guess);
        }
    } while (guess != random);

    printf("\nThanks for Playing!\n");
    return 0;
}
