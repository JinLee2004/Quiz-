#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "validation.h"

int main(int argc, char* argv[]) {
    int total, userInput, percentage = 0; 

    printf("Welcome to a quiz game!!! \n");
    do {
        printf("> Press 0 to start \n");
        printf("> Press 1 to end \n");
        scanf("%d", &userInput);
        userInput = checkInput(userInput); /* Does not check for string input */
    }while (userInput > 1 || userInput < 0);

    if (userInput == 0) {
        printf("Goodbye! \n"); /* User decides not to play quiz game */
    }
    else if(userInput == 1) {
        total = quizQuestions();
        percentage = scoreInPercentage(total);
        printf("Your final score is: %d/5 %d%% \n", total, percentage); /* %% Prints literal percentage sign */
    }
    return 0;
}