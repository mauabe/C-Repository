// TwoDArray.c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// #include "stdio.h"
#include "time.h"
#include "stdlib.h"


// Declaration Prototype
int RandNum(int, int);
void FindMaxOfRow(int[][12], int);

//Function Call
int main()
{
	int Table[10][12];
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			Table[i][j] = RandNum(100, 200);

	for (i = 0; i < 10; i++)
		FindMaxOfRow(Table, i);

	//Temporary print for cheking
	for (i = 0; i < 10; i++)
		for (j = 0; j < 12; j++)
			printf( "%d %c", Table[i][j], (j == 11) ? '\n' : '\t');

	    return 0;
}



// Function Defintion
int RandNum(int LLim, int ULim)
{
	static int round = 1;

	/*
	if (round == 1)
		srand(time(NULL));
	else round++;
	*/

		return rand() % (ULim - LLim + 1) + LLim;
		
}

void FindMaxOfRow(int Table[][12], int row)
{
	int j;
	int max;
	int maxIndex;

	maxIndex = 0;
	max = Table[row][0];

	for(j = 0; j < 10; j++)					//for all columns in a given row
		if (max < Table[row][j])			//if find a new max
		{
			max = Table[row][j];			//get new  max
			maxIndex = j;					// get its index
		}
	Table[row][10] = maxIndex;				// put max index on 11th column
	Table[row][11] = max;					//put max value on last column







}

