#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int number, guess, attempts = 0;
    srand(time(0));     //initializes the random number generator.
    number = rand() %100 +1;  //generates a random number from 1 to 100.

    printf("Enter you guess between 1 to 100");

    do{
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        
        attempts++;

        if (guess > number)
        {
            printf("\nLower number please");
        }
        else if (guess < number)
        {
            printf("\nHigher number please");
        }
        else{
            printf("You guessed it right in %d attempts\n", attempts);
        }
        }while (guess != number);
        

    return 0;
}
