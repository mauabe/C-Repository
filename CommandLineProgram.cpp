// CommandLineProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"


int main(int argc, char * argv[])
{
	if (argc == 1)
	{
		printf("Program running in User Mode\n\n");
			// modecodehere
	}
	else if (argc == 2)
	{
		if (strcmp(argv[1], "ABCD") == 0)
		{
			printf("Program is running in Management Mode\n\n");
			//morecodehere
		}
		else
		{
			printf("Incorrect password\n\n");	//Exiting
		}
	}
	else
	{
			printf("Incorrect number of parameters\n\n");  //Exiting
	}
	return 0;
}


