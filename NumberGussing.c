#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random number between 1 and 100
                               // printf("The number is %d\n", number);
                               // Keep running the loop until the number is guessed
    printf("Guess the number between 1 to 100\n");
    scanf("%d", &guess);
    if (guess > 1 && guess < 100)
    {
        while (guess != number)
        {
            if (guess > number)
            {
                printf("Lower number please!\n");
                scanf("%d", &guess);
            }
            else if (guess < number)
            {
                printf("Higher number please!\n");
                scanf("%d", &guess);
            }
            nguesses++;
        }
        printf("You guessed it in %d attempts\n", nguesses);
    }

    else
        printf("Guess the number between 1 to 100 only! \n");
    return 0;
}