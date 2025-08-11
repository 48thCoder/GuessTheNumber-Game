// Guess the Number Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, level, nguess = 1;
    char choice;
    srand((time(0)));
    num = rand() % 100 + 1;

    printf("\n");
    printf("================================\n");
    printf("WELCOME TO GUESS THE NUMBER GAME\n");
    printf("================================\n\n");

    printf("Do you wish to know the rules? (Y/N): ");
    scanf("%c", &choice);
    printf("\n");

    if (choice == 'Y' || choice == 'y')
    {
        printf(">> GAME RULES\n\n");
        printf("1) Objective:\n");
        printf("\t- The computer will randomly choose a secret number within a given range.\n");
        printf("\t- Your goal is to guess it within the allowed attempts.\n\n");

        printf("2) Difficulty Levels:\n");
        printf("\t- Easy   -> 15 guesses allowed\n");
        printf("\t- Medium -> 10 guesses allowed\n");
        printf("\t- Hard   ->  5 guesses allowed\n\n");

        printf("3) How to Play:\n");
        printf("\t- Select a difficulty level.\n");
        printf("\t- Enter your guess when prompted.\n");
        printf("\t- After each guess, the result will be displayed as:\n");
        printf("\t    > \"Too high\" -> if your guess is greater than the secret number.\n");
        printf("\t    > \"Too low\"  -> if your guess is less than the secret number.\n");
        printf("\t    > \"Correct\"  -> if your guess matches the secret number.\n\n");

        printf("4) Winning and Losing:\n");
        printf("\t- Win  -> Guess correctly before attempts run out.\n");
        printf("\t- Lose -> Fail to guess — the secret number will be revealed.\n\n");

        printf("5) Additional Rules:\n");
        printf("\t- Only whole numbers within the range are valid.\n");
        printf("\t- Out of range guesses will not be counted.\n");
        printf("\t- The game ends when you win or run out of attempts.\n\n");

        printf("Hope you have understood the rules. All the very best for the game!\n\n");
    }

    else if (choice == 'N' || choice == 'n')
    {
        printf("So, let's begin the game!\n\n");
    }

    else
    {
        printf("INVALID INPUT! PLEASE RESTART THE GAME.\n\n");
        exit(0);
    }

    printf("Choose the Difficulty Level (1 - Easy, 2 - Medium, 3 - Hard): ");
    scanf("%d", &level);

    if (level < 1 || level > 3)
    {
        printf("INVALID INPUT! PLEASE RESTART THE GAME.\n\n");
        exit(0);
    }

    do
    {
        printf("\n");
        printf("Guess a no. between 1 and 100: ");
        scanf("%d", &guess);

        if (guess < 1 || guess > 100)
        {
            printf("INVALID INPUT! PLEASE GUESS A NUMBER BETWEEN 1 AND 100.\n");
            continue;
        }

        else if (guess < num)
        {
            printf("Think of a bigger no.\n");
        }

        else if (guess > num)
        {
            printf("Your guess is quite high!!\n");
        }

        else
        {
            printf("Hurray! Your have guessed it correctly :)\n");
            printf("No. of guesses = %d\n\n", nguess);
            break;
        }

        if (level == 1)
        {
            if (nguess == 15)
            {
                printf("\n");
                printf("Game Over :(\n");
                printf("You have reached the maximum number of guesses.\n");
                printf("Correct Number = %d\n\n", num);
                break;
            }
        }

        else if (level == 2)
        {
            if (nguess == 10)
            {
                printf("\n");
                printf("Game Over :(\n");
                printf("You have reached the maximum number of guesses.\n");
                printf("Correct Number = %d\n\n", num);
                break;
            }
        }

        else
        {
            if (nguess == 5)
            {
                printf("\n");
                printf("Game Over :(\n");
                printf("You have reached the maximum number of guesses.\n");
                printf("Correct Number = %d\n\n", num);
                break;
            }
        }
        nguess++;
    } while (guess != num);

    return 0;
}
