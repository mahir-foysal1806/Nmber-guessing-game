#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int number_guessing = 0;
    srand(time(NULL));
    printf("Welcome to the world of guessing numbers \n");
    random = rand() % 100 + 1;
    do
    {
        printf("\nPleace Enter you guess between(1-100) :");
        scanf("%d", &guess);
        number_guessing++;
        if (guess < random)
        {
            printf("Guess larger number .\n");
        }
        else if (guess > random)
        {
            printf("Guess smoller number");
        }
        else
        {
            printf("Congratulation !!! You have successfully guessed the number in %d attempts .\n", number_guessing);
        }

    } while (random != guess);
    printf("\nBye Bye ,thanks for playing ");
    printf("\n This game develop by Mahir foysal");

    return 0;
}