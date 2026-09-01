#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Rock Paper Scissors Game

int main() {

    int player, computer;

    srand(time(0));
    computer = rand() % 3 + 1;

    printf("===== ROCK PAPER SCISSORS =====\n\n");

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("\nEnter your choice: ");
    scanf("%d", &player);

    printf("\nYou chose: ");

    if (player == 1)
        printf("Rock");
    else if (player == 2)
        printf("Paper");
    else if (player == 3)
        printf("Scissors");
    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nComputer chose: ");

    if (computer == 1)
        printf("Rock");
    else if (computer == 2)
        printf("Paper");
    else
        printf("Scissors");

    printf("\n\n");

    if (player == computer) {
        printf("It's a DRAW! \n");
    }
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2)) {
        printf("YOU WIN! \n");
    }
    else {
        printf("COMPUTER WINS! \n");
    }

    return 0;
}
