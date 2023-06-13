#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("This is a number guessing game. You have 5 chances to guess a number between 1 and 6. Each incorrect guess deducts 20 points from your total score.\n");
    int marks = 100;
    int userNumber;

    srand(time(NULL));

    for (int i = 1; i <= 5; i++) {
        int num = 1 + rand() % 6;

        printf("Attempt %d: Enter your guess (1-6): ", i);
        scanf("%d", &userNumber);

        if (userNumber == num) {
            printf("Congratulations! You guessed the number correctly.\n");
            break;
        } else {
            printf("Incorrect guess. Try again.\n");
            marks -= 20;
        }
    }

    printf("Your score: %d\n", marks);

    return 0;
}


