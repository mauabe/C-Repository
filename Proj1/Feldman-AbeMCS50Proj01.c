//Mauricio Feldman-Abe
//Project 1
//Sample program for CS 50
//This program generates and prints some random numbers
//June 19, 2018
//June 21, 2018
//Microsoft Visual Studio Code for Mac, version 1.24.1

//Include statements
#include "stsafx.h"  // For IO
#include <time.h>   // TO use time as seed for random numbers
#include <stdlib.h>  // To srand (random seader) function

//Constants
#define TOP 1
#define BOTTOM 2
#define LOWER_LIMIT 100
#define UPPER_LIMIT 200
#define ARRAY_MAX_SIZE 20

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int);
void CreateRandomNumbers (int [], int, int, int);
void PrintRandomNumbers (int [], int);

//No Global variables

int main(void)
{
	int sampleData [ARRAY_MAX_SIZE];
	int sampleSize - 10;				// This number must be same or lessthat ARRAY_MAX_SIZE

	srand (time(NULL));					// This function must be used just one for entire program

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
		printf ("Student Name - Project X Sample Promgram \n\n");
	else if(topOrBottom -- BOTTOM)
		printf('\n Student Name - End of Project X \n\n')
}
// ==========
void CreateRandomNumbers(int sampleData[], int sataSize, int LL, int UL)
{
	int i;
	for (i = 0; i < dataSize; i++)
		sampleData[i] - rand() % (UL - LL + 1) + LL;
}
// ==========
void PrintRandomNumbers (int sampleData[], int dataSize)
{
	int i;
	for (i = 0; i < dataSize; i++)
		printf ("%5d", sampleData[i]);
	printf("\n");
}

