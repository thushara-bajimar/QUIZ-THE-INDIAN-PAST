#include <stdio.h>
#include <string.h>
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

int main() {
    int score = 0;
    int correct = 0;
    int wrong = 0;
    int answer;
    char ready[10];

    printf(YELLOW "***** WELCOME TO THE INDIAN HISTORY QUIZ *****\n\n" RESET);
    printf("Are You Ready To Test Your Knowledge About Indian History? (YES/NO): ");
    scanf("%s",&ready);

    if(strcmp( ready, "YES") == 0 || strcmp( ready, "yes") == 0 || strcmp( ready, "Yes") == 0){
        printf(YELLOW "COOL!, let's continue....\n\n" RESET);
        printf("THE INSTRUCTIONS :\n# There are total 5 questions\n# Four options are given for each question\n");
        printf("# For each correct answer you gain 10 and for each wrong answer you lose 5  \n\n");
        printf(YELLOW "SO GIVE YOUR BEST!!\n\n" RESET);
    }else if(strcmp( ready, "NO") == 0 || strcmp( ready, "no") == 0 || strcmp( ready, "No") == 0){
        printf("OKAY!, let's meet next time\n\n");
        return 0;
    }else{
        printf("Please type *YES/NO* ");
        return 0;
    }

    // Question 1
    printf(BLUE "1. Who wrote the book 'Arthashastra'?\n" RESET);
    printf("1) Ashoka\n2) Kalidasa\n3) Chanakya(Kautilya)\n4) Megasthanes\n");
    printf(BLUE "Enter your answer (1-4): " RESET);
    scanf("%d", &answer);
    if(answer == 3) {
        printf(GREEN "Correct!\n\n" RESET);
        score+=10;
        correct+=1;
    } else {
        printf(RED "Wrong! The Correct answer is Chanakya(Kautilya).\n\n" RESET);
        score-=2;
        wrong+=1;
    }

    // Question 2
    printf(BLUE "2. Which Indian Empire was known for having the world's largest army during its time?\n" RESET);
    printf("1) Gupta Empire\n2) Mauryan Empire\n3) Mughal Empire\n4) Chola Empire\n");
    printf(BLUE "Enter your answer (1-4): " RESET);
    scanf("%d", &answer);
    if(answer == 2) {
        printf(GREEN "Correct!\n\n" RESET);
        score+=10;
        correct+=1;
    }else{
        printf(RED "Wrong! The Correct answer is Mauryan Empire.\n\n" RESET);
        score-=2;
        wrong+=1;
    }    

    // Question 3
    printf(BLUE "3. Which ancient Indian text is known as the earliest record of Indian history?\n" RESET);
    printf("1) Mahabharata\n2) Rigveda\n3) Ramayana\n4) Arthashastra\n");
    printf(BLUE "Enter your answer (1-4): " RESET);
    scanf("%d", &answer);
    if(answer == 2) {
        printf(GREEN "Correct!\n\n" RESET);
        score+=10;
        correct+=1;
    } else {
        printf(RED "Wrong! Correct answer is Rigveda.\n\n" RESET);
        score-=2;
        wrong+=1;
    }

    // Question 4
    printf(BLUE "4. Which ancient university in India attracted students from China, Greece, and Persia?\n" RESET);
    printf("1) Nalanda University\n2) Banaras University\n3) Taxila University\n4) Vikramashila University\n");
    printf(BLUE "Enter your answer (1-4): " RESET);
    scanf("%d", &answer);
    if(answer == 1) {
        printf(GREEN "Correct!\n\n" RESET);
        score+=10;
        correct+=1;
    } else {
        printf(RED "Wrong! Correct answer is Nalanda University.\n\n" RESET);
        score-=2;
        wrong+=1;
    }

    // Question 5
    printf(BLUE "5. Which early Indian Civilization was known for its advanced drainage system?\n" RESET);
    printf("1) Vedic Civilizaton\n2) Harappan Civilization\n3) Mauryan Empire\n4) Chola Dynasty\n");
    printf(BLUE "Enter your answer (1-4): " RESET);
    scanf("%d", &answer);
    if(answer == 2) {
        printf(GREEN "Correct!\n\n" RESET);
        score+=10;
        correct+=1;
    } else {
        printf(RED "Wrong! Correct answer is Harappan Civilization.\n\n" RESET);
        score-=2;
        wrong+=1;
    }

    // Display final score
    printf("%d out of 5 are correct!\n",correct);
    printf("%d out of 5 are incorrect!\n",wrong);
    printf(BLUE "Your final score is: %d out of 50\n\n", score, RESET);

    if(score == 50) {
        printf(YELLOW "Excellent! You got all answers correct!\n" RESET);
    } else if(score >= 30) {
        printf(YELLOW "Good job! You scored above average.\n" RESET);
    } else {
        printf(YELLOW "Ohh! Not as expected. You'll do better next time. \n" RESET);
    }

    return 0;
}

