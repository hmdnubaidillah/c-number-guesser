#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int generateRandomNumber()
{
    // generate random number between 1 to 10
    srand(time(NULL));
    return rand() % 10 + 1;
}

int main()
{
    int randomNumber = generateRandomNumber();
    int chance = 5;

    int userInput;
    printf("Guess number between 1 to 10, you have 5 chances\n");
    printf("%d\n", randomNumber);

    while (chance > 0)
    {
        printf("Enter number : ");
        scanf("%d", &userInput);

        if (chance == 0)
        {
            printf("You lose, the correct number is %d\n", randomNumber);
            break;
        }

        if (userInput == randomNumber)
        {
            printf("You win, the correct number is %d\n", randomNumber);
            break;
        }

        if (userInput > randomNumber)
        {
            printf("Too high\n");
        }

        if (userInput < randomNumber)
        {
            printf("Too low\n");
        }

        chance--;
        printf("You have %d %s available\n", chance, chance <= 1 ? "chance" : "chances");
    }

    return 0;
}
