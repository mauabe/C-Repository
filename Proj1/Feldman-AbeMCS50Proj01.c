//Mauricio Feldman-Abe
//Project 1
//Sample program for CS 50
//This program generates and prints some random numbers
//June 19, 2018
//June 21, 2018
//Apple Xcode (also used Visual Studio Code for Mac)
//Compiler clang / g++

//Include statements
#include <stdio.h>
//#include "stdafx.h"  // Don't have this file, using stdio.h instead.
#include <time.h>   // TO use time as seed for random numbers
#include <stdlib.h>  // To srand (random seader) function

//Constants
#define TOP 1
#define BOTTOM 2
#define LOWER_LIMIT 100
#define UPPER_LIMIT 200
#define ARRAY_MAX_SIZE 20

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int topOrBottom);
void CreateRandomNumbers (int [], int, int, int);
void PrintRandomNumbers (int [], int);

//No Global variables

int main(void)
{
    int sampleData [ARRAY_MAX_SIZE];
    int sampleSize = 10;               // This number must be same or less than ARRAY_MAX_SIZE
    srand(time(NULL));                    // This function must be used just once for entire program
    
    // Call functions: must provide real variables/constant names
    PrintStudentInfo (TOP);
    CreateRandomNumbers (sampleData, sampleSize, LOWER_LIMIT, UPPER_LIMIT);
    PrintRandomNumbers (sampleData, sampleSize);
    PrintStudentInfo (BOTTOM);
    
    return 0;
}
// ===========
void PrintStudentInfo (int topOrBottom)
{
    if (topOrBottom == TOP)
        printf ("Mauricio Feldman-Abe - Project 1 Sample Program \n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Project 1 \n\n");
}

// ===========
void CreateRandomNumbers (int sampleData[], int sampleSize, int LL, int UL)
{
    int i;
    for (i = 0; i < sampleSize; i++)
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
