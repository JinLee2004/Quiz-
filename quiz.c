#include <stdio.h>
#include <stdlib.h>
#include "questions.h"
#include "validation.h"

int main(int argc, char* argv[]) {
    int total, userInput; 

    printf("Welcome to a quiz game!!!");
    do {
        printf("> Press 0 to start. ");
        printf("> Press 1 to end. ");
        userInput = checkInput(userInput); /* Does not check for string input */
    }while (userInput > 1 || userInput < 0);

    if (userInput == 0) {
        printf("Goodbye!"); /* User decides not to play quiz game */
    }
    else if(userInput == 1) {
        total = quizQuestions();
    }
    printf("Your total score is: %d\n", total);
    return 0;
}