#include <stdio.h> //→ for input/output (printf, scanf)
#include <stdlib.h> //for rand() and srand()
#include <time.h> //for time(0) (used to make the random numbers different each time)

void printChoice(int choice) { //this function  converts the number into a string like "Rock", etc. 
    if (choice == 1) printf("Rock\n");
    else if (choice == 2) printf("Paper\n");
    else if (choice == 3) printf("Scissors\n");
}

int main() {
    int userChoice, computerChoice; //userChoice stores the number you enter (1/2/3) & computerChoice stores the computer's randomly generated move


    int userScore=0,compScore=0;// for recording scores

    // time(0) gives the current time in seconds.

//Using it in srand() makes sure that rand() gives different results each time you run the program.
    srand(time(0));

    // This starts an infinite loop, so the game keeps running until the user chooses to exit (choice 4).

    while (1) { 
        printf("\n--- Rock, Paper, Scissors ---\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == 4) {
            printf("Thanks for playing!\n");
            break;
        }

        if (userChoice < 1 || userChoice > 4) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        computerChoice = (rand() % 3) + 1; //picks a number between 1 and 3 for the computer.

        printf("You chose: ");
        printChoice(userChoice);
        printf("Computer chose: ");
        printChoice(computerChoice);

        if (userChoice == computerChoice)
            printf("It's a draw!\n");
        else if ((userChoice == 1 && computerChoice == 3) ||
                 (userChoice == 2 && computerChoice == 1) ||
                 (userChoice == 3 && computerChoice == 2))
           { printf("You win!\n");
            userScore++;
        }
    
        else
            {printf("HAHA YOU LOSE!\n");
            compScore++;
        }
    }

    return 0;
}
