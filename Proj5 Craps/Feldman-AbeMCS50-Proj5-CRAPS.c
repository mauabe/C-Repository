//Mauricio Feldman-Abe
//Project 5
//Craps Game for CS 50
//This program simulate a dice craps game
//July 18, 2018
//July 22, 2018
//Apple Xcode
//Compiler clang / g++

//Include statements
#include <stdio.h>
// #include "stdafx.h"  // Don't have this file, using stdio.h instead.
#include <time.h>   // TO use time as seed for random numbers
#include <stdlib.h>  // To srand (random seader) function

//Constants
#define TOP 1
#define BOTTOM 2
#define LOWER_LIMIT 1
#define UPPER_LIMIT 6
#define ARRAY_MAX_SIZE 2

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int );

int GetRecords ([], char *[], int);


void CreateRandomNumbers (int [], int, int, int);
//void PrintRandomNumbers (int [], int);
void GenerateDices (int , int , int );


//No Global variables





// ========================================
int main(void)
{
    int dice1;
    int dice2;
    int sum;
    
    
    //int sampleData [ARRAY_MAX_SIZE];
    int sampleSize = 2;               // This number must be same or less than ARRAY_MAX_SIZE
    srand(time(NULL));                 // This function must be used just once for entire program
    
    // Call functions: must provide real variables/constant names
    PrintStudentInfo (TOP);
    CreateRandomNumbers (sampleData, sampleSize, LOWER_LIMIT, UPPER_LIMIT);
//    PrintRandomNumbers (sampleData, sampleSize);
    
    GenerateDices (int dice1, int dice2, int sum)

    
    
    
    
    
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
// ========================
void GenerateDices (int dice1, int dice2, int sum)
{
    dice1 = RandNum(1,6);
    dice2 = RandNum(1,6);
    sum =  dice1 + dice2;
    printf ("%d  %d  %d", dice1, dice2, sum )
}


// ============================
void
    
int firstHand []

    
    
    int crap = (2 || 3 || 12);
    int win = (7 || 11);
    

    do
    {
    switch(sum)
    {
        case 2:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Sorry, you lost!");
            break
        case 3:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Sorry, you lost!");
            break;
        case 12:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Sorry, you lost!");
            break;
            
        default 7:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Congrats! You won!");
            break;

        default 11:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Congrats! You won!");
            break;

            
            
        default 4:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
        default 5:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
        default 6:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
        default 8:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
        default 9:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
        default 10:
            printf("Your dices rolled: %d and %d = %d", dice1, dice2, sum);
            printf("Point is now %d!", sum);
    }
    }
    while
        
            
}


// ===========
void CreateRandomNumbers (int sampleData[], int sampleSize, int LL, int UL)
{
    int i;
    for (i = 0; i < 2; i++)
        sampleData[i] = (rand() % (UL - LL + 1)) + LL;
}
// ==========
void PrintRandomNumbers (int sampleData[], int sampleSize)
{
    int i;
    for (i = 0; i < sampleSize; i++)
        printf ("%5d", sampleData[i]);
    printf("\n");
}
