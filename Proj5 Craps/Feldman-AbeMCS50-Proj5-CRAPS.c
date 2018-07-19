//Mauricio Feldman-Abe
//Project 5
//Craps Game for CS 50
//This program simulate a dice craps game
//July 18, 2018
//July 22, 2018
//Apple Sublime Text
//Compiler clang / g++

//Include statements
#include <stdio.h>
// #include "stdafx.h"  // Don't have this file, using stdio.h instead.
#include <time.h>   // TO use time as seed for random numbers
#include <stdlib.h>  // To srand (random seader) function

//Constants
#define TOP         1
#define BOTTOM      2
#define WIN         10
#define LOST        11
#define CONTINUE    12

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int );

//No Global variables

// ========================================
int main(void)
{
    srand(time(NULL));                 // This function must be used just once for entire program
    int LL  = 1;
    int UL = 6;
    int dice1 = rand() % (UL - LL + 1) + LL;
    int dice2 = rand() % (UL - LL + 1) + LL;
    int sum =  dice1 + dice2;
    int sum2 =  dice1 + dice2;

    int mypoint;
    int gameStatus;
    

    // Call functions: must provide real variables/constant names
    PrintStudentInfo (TOP);

    switch(sum)
    {
        case 2:
        case 3:
        case 12:
            printf("Your dices rolled: %d and %d = %d\n\n", dice1, dice2, sum);
            printf("Craps! Sorry, you lost!\n\n\n\n");
            gameStatus = LOST;
            break;
        case 7:
        case 11:
            printf("Your dices rolled: %d and %d = %d\n\n", dice1, dice2, sum);
            printf("Congrats! You won!\n\n\n\n");
            gameStatus = WIN;
            break;         
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            printf("Your dices rolled: %d and %d = %d\n\n", dice1, dice2, sum);
            printf("Point is now %d! The game continues:\n\n", sum);
            mypoint = sum;
            gameStatus = CONTINUE;
    }
    
    while (gameStatus == CONTINUE)
    {
        int dice1 = rand() % (UL - LL + 1) + LL;
        int dice2 = rand() % (UL - LL + 1) + LL;
        int sum2 = dice1 + dice2;

        printf("Your dices rolled: %d and %d = %d \n", dice1, dice2, sum2);

        if (sum2 == 7)
        {
            printf("Oh, craps! %d, you lost!\n\n\n", sum2);
            gameStatus = LOST;
        }

        else if (sum2 == mypoint)
        {
            printf("Congrats! You won!\n\n\n");
            gameStatus = WIN;
        }
    }

    PrintStudentInfo (BOTTOM);
   


    return 0;
}
//=============================
void PrintStudentInfo (int topOrBottom)
{
    if (topOrBottom == TOP)
        printf ("Mauricio Feldman-Abe - Project 5 Craps Game \n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Project 5 \n\n");
}


