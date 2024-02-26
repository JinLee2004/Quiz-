#include <stdio.h>
#include <stdlib.h>
#include "validation.h"
#include "questions.h"

int checkInput(int userInput) {
    int number;

    if (userInput == 0) {
        number = 0;
    }
    else if (userInput == 1) {
        number = 1;
    }
    else {
        printf("Please enter a valid number\n");
        number = -1;
    }

    return number; 
}

int scoreInPercentage(int total) {
    int percentage;

    percentage = total * 20;

    return percentage;
}

int validateAnswer (int userAnswer)
{
    int valid = 0;
    if (userAnswer <=4 && userAnswer >=1)
    {
        valid = 1;
    }
    else 
    {
        printf("Please enter a valid number\n");
    }
    return valid;
}
