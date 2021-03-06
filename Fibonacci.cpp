// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "stdio.h"
#include "ctype.h"
#include "math.h"
#include "time.h"


//prototype 
int ComputeFib(int num);
int ComputeFibRec(int num);


int main()
{
	int num;				//Number from which Fibonacci number is calculated
	int fiboNum;			//calculated Fibonacci number
	int fiboNumRec;			//Finbonacci by recursion
	int compLevel;			//Level of repeating computations
	int duration;			//For recording elapsed time
	int i;

	printf("Timing and recursion exercise \n\n");

	do
	{
		printf("Enter a number up to 20 for computing Fibonacci number (0 to stop): ");	//prompt
		scanf_s("%d", &num);

		if (num == 0) break;

		printf("Enter a number for computational level (1-9): ");						// prompt
		scanf_s("%d", &compLevel);

	
		//NON-RECURSIVE VERSION
		duration = time(NULL);					//current time in seconds since 1970
		printf("%d\n\n", duration);				//Temp print for check

		for (i = 1; i < pow((double)10, compLevel); i++)
		{
			fiboNum = ComputeFib(num);
		}

		duration = time(NULL) - duration;		// Compute elapsed time
		
		printf("Fibonacci number: %d\n", fiboNum);
		printf("Elapsed time for NON-RECURSIVE computing: %d\n\n", duration);


		//RECURSIVE 

		duration = time(NULL);					//current time in seconds since 1970
		printf("%d\n\n", duration);				//Temp print for check

		for (i = 1; i < pow((double)10, compLevel); i++)
		{
			fiboNum = ComputeFibRec(num);
		}

		duration = time(NULL) - duration;		// Compute elapsed time

		printf("Fibonacci number: %d\n", fiboNum);
		printf("Elapsed time for RECURSIVE computing: %d\n\n", duration);

	} while (num != 0);

    return 0;
}


// ============================

int ComputeFib(int num)
{
	int fib1 = 0;
	int fib2 = 1;
	int i;
	int temp;

	for (i = 1; i < num; i++)
	{
		temp = fib2;
		fib2 = fib2 + fib1;
		fib1 = temp;
	}
	return fib2;
}

// ============================
int ComputeFibRec(int num)
{
	if (num <= 1)
		return num;
	else
		return ComputeFibRec(num - 1) + ComputeFibRec(num - 2);
}
