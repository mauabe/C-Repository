// STUB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

#define		FALSE	0
#define		TRUE	0

int main(void)
{
	/*int correctLen = FALSE;
	int upperCase  = FALSE;
	int lowerCase  = FALSE;
	int speialChar = FALSE;
	int numExist   = FALSE;
	int noSpace    = FALSE;*/

	int i;
	char password[30];

	const char * PSWDTests[10] = { "tooshort", "toolongtoolongtoolong", "NoNumbersIncluded", "nouppercaseletters",
								   "NOLOWERCASELETERS", "NoEven1SpecialSym", "Space NoGood!Even1", "This1NoSpaceisOK!"
								   "ABCdef123$$$", "10thIsGoodAlso+" };
	   
	for (i = 0; i < 9; i++)
	{
		strcpy_s(password, PSWDTests[i]);		// VS requires using _s version

		if (strlen(password) < 10 || strlen(password) > 20)
		{
			printf("Password %s must be between 10 and 20 characters\n\n", password);
			continue;
		}
		if (strpbrk(password, "0123456789") == NULL)
		{
			printf("Password %s must include a number\n\n", password);
			continue;
		}
		if (strpbrk(password, "ABCDEFGHIJKLMNOPQRTUVWXYZ") == NULL)
		{
			printf("Password %s must include an uppercase letter\n\n", password);
			continue;
		}
		if (strpbrk(password, "abcdefghijklmnopqrtuvwxyz") == NULL)
		{
			printf("Password %s must include a lowercase letter\n\n", password);
			continue;
		}
		if (strpbrk(password, "~!@#$%^&*()_+-=|\{}[]:;<>/?") == NULL)
		{
			printf("Password %s must include a special symbol: ~!@#$%^&*()_+-=|{}[]:;<>/? \n\n", password);
			continue;
		}
		if (strpbrk(password, " ") != NULL)
		{
			printf("Password %s cnnot include space.\n\n", password);
			continue;
		}


		printf("Password %s is accetpable.\n\n", password);
	}

	return 0;
}

