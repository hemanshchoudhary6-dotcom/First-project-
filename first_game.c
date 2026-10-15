#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int guessed = 0;
    int no_of_guesses = 0;
    int randomNumber = (rand() % 1000) + 1;
    srand(time(0));


    
    do {
        printf("Guess the number (1-1000  ): ");
        scanf("%d", &guessed);
        if (guessed < randomNumber) {
            printf("Your guess is too low. Try again.\n");
        } else if (guessed > randomNumber) {
            printf("Your guess is too high. Try again.\n");
        }
        no_of_guesses++;
    
    } while (guessed != randomNumber);
    if (guessed == randomNumber){
        printf(" congratulations! you gussed the number ab tum zindagi mai jeet gye ho \n");
        
    } 
    else {
        printf("Sorry, you did not guess the number. The correct number was %d.\n", randomNumber);
        
    }
    printf("Number of guesses: %d\n", no_of_guesses);
    
    return 0;
}