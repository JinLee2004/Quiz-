#include "questions.h"

int quizQuestions() {
    int userInput, score = 0;
    
    printf("Which U.S. president was the first to die in office? \n");
    printf("1. William Henry Harrison\n");
    printf("2. Barack Obama\n");
    printf("3. James A. Garfield\n");
    printf("4. Abraham Lincoln\n");
    scanf("%d", &userInput);
    if (userInput == 1) {
        score++;
    }
    printf("The answer was 1. William Henry Harrison\n");

    printf("What is the most common colour of toilet paper in France? \n");
    printf("1. White\n");
    printf("2. Pink\n");
    printf("3. Blue\n");
    printf("4. Green\n");
    scanf("%d", &userInput);
    if (userInput == 2) {
        score++;
    }
    printf("The answer was 2. Pink\n");

    printf("What is the average waste an Australian produces every year? \n");
    printf("1. 360kg \n");
    printf("2. 540kg \n");
    printf("3. 650kg \n");
    printf("4. 780kg \n");
    scanf("%d", &userInput);
    if (userInput == 2) {
        score++;
    }
    printf("The answer was 2. 540kg\n");

    printf("What is the symbol for the element Tungsten \n");
    printf("1. Tg\n");
    printf("2. Tu\n");
    printf("3. Tn\n");
    printf("4. W\n");
    scanf("%d", &userInput);
    if (userInput == 4) {
        score++;
    }
    printf("The answer was 4. W\n");

    printf("What was the period of music that followed the Renaissance? \n");
    printf("1. Baroque\n");
    printf("2. Medieval\n");
    printf("3. Romantic\n");
    printf("4. Classical\n");
    scanf("%d", &userInput);
    if (userInput == 1) {
        score++;
    }
    printf("The answer was 1. Baroque\n");
    return score;
}
