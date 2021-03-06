// LetterFreq.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "stdio.h"
#include "ctype.h"


#define NUM_OF_LETTERS   26

int letterFreq[NUM_OF_LETTERS];
void PrintResults(int[], int);


int main()
{
	FILE * fp;
	char ch;
	char chCapital;
	int numOfChars;
	int numOfLetters;

//	fp = fopen("sampleText.txt", "r");
	fopen_s(&fp, "sampleText.txt", "r");

	printf("Letter count File exercise \n\n");

	 numOfChars = 0;
	 numOfLetters = 0;

	while ((ch = getc(fp)) != EOF)
	{
		numOfChars++;				//count characters
		chCapital = ch & 223;		//convert to capital
		if (chCapital >= 'A' && chCapital <= 'Z')
		{
			numOfLetters++;
			letterFreq[chCapital - 'A'] += 1;		//count each letter
		}
	}
		printf("Number of characters read: %d\n", numOfChars);
		printf("Number of letters read: %d\n", numOfLetters);
		PrintResults(letterFreq, numOfLetters);
		
		fclose(fp);
	return 0;
}

void PrintResults(int letterFreq[], int numOfLetters)
{
	int i;
	float letterPercent;
	for (i = 0; i < NUM_OF_LETTERS; i++)
	{
		letterPercent = 100.0 * letterFreq[i] / numOfLetters;
		printf("%c%c%4d%c%6.2f\n", i + 'A', '\t', letterFreq[i], '\t', letterPercent);
	}

}

