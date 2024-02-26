#include <stdio.h>
#include <stdlib.h>
#include "validation.h

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
