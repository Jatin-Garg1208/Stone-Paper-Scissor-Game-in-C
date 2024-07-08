#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
int game(char *you,char *computer);
int main()
{
    char you[10], computer[10];
    int n, result;

    srand(time(NULL)); // taking random number at current time
    n=rand()%100;       // make the number small than 100

    if(n<=33)
    {
        strcpy(computer, "Scissor");     // assign the value
    }
    else if (n>33 && n<=66)
    {
        strcpy(computer, "Paper");
    }
    else
    {
        strcpy(computer, "Stone");
    }

    printf("Enter your choice: \n1) Stone \n2)Paper \n3)Scissor\n");
    scanf("%[^\n]",you);    // take user value

    printf("\n Your choice is: %s",you);
    printf("\n Computer choice is: %s",computer);

    result= game(you,computer);    // called function

    if (result == -1)
        printf("\nGame is draw");
    else if (result == 1)    // check who won the game
        printf("\n Hurray! You won the game");
    else
        printf("\nComputer won the game\nBad luck, Try next time");
    return 0;
}

int game(char *you, char *computer)    // make pointer for accessing the original value
{

    if (strcmp(you, "Scissor") == 0 && strcmp(computer, "Scissor") == 0)   // compare the value
        return -1;
    else if (strcmp(you, "Scissor") == 0 && strcmp(computer, "Stone") == 0)
        return 0;
    else if (strcmp(you, "Scissor") == 0 && strcmp(computer, "Paper") == 0)
        return 1;
    else if (strcmp(you, "Stone") == 0 && strcmp(computer, "Scissor") == 0)
        return 1;
    else if (strcmp(you, "Stone") == 0 && strcmp(computer, "Stone") == 0)
        return -1;
    else if (strcmp(you, "Stone") == 0 && strcmp(computer, "Paper") == 0)
        return 0;
    else if (strcmp(you, "Paper") == 0 && strcmp(computer, "Scissor") == 0)
        return 0;
    else if (strcmp(you, "Paper") == 0 && strcmp(computer, "Stone") == 0)
        return 1;
    else if (strcmp(you, "Paper") == 0 && strcmp(computer, "Paper") == 0)
        return -1;
    else
    {
        printf("\nWrong choice is input");
        exit(0);
    }
}
