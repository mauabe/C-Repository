// Exercise: String and Struct

#include "stdafx.h"				// For IO
#include <string.h>				// For string functions
#include <stlib.h>


const char * sampleData[] = {	"Eduardo Gomez 82 90 73 95",
								"Melissa    Roberts   60   63 54  87",
								"Jordan Jones   88  70 84     76",
								"Carlos     Omar   78   93  94    95",
								"Ziba Word   66   67   76  78",
								"George    Profit   66   88 89    87",
								"Salah    Ali   75   75 89  83",
								"Juan    Martin    82   84 58  85",
								"ZZ",
							};

typedef struct 				// Define a record type
{
	char fullName[25];
	int scores[4];
	int total;
	char Grade;
} StudentRecType;


#define MAX_NUM_OF_RECORDS		10


//void PrintStudentInfo(int);
int GetRecords(StudentRecType[], char *[], int);


int main(void)
{


StudentRecType studentRecords[MAX_NUM_OF_RECORDS]

	
	int i;
	i = 0;
	do
	{
		strcpy_s(buffer, sampleData[i++]); 		// same as sampleDATA[i]; i++
		printf("%s\n", buffer);
	} while (1);



	return 0;
}

// =================================================================

int GetRecords(StudentRecType studentRecords [], char * sampleData[], int maxNoOfRecords)
{
	int recNum;
	char buffer [100];				// Work array
	char fName[20];					// FIrst name
	char lName[20]					// Last name
	int index1;
	int index2;						//
	char temp[10];					// used tohold ASCII number
	int score;
	int scoreIndex;

	recNum =0;

	do
	{
		strcpy_s (buffer, sampleData [recNum])
			if ((buffer[0] | 32) == 'z' && (buffer[1] | 32) == 'z')
			break;

		printf ("%s\n", buffer);			// temp test, remove after working
		index1 = index2 =0
		while (buffer[index1]!=  ' ')
			fname[index2++]= buffer[index1++];
		fname[index2++] =  '\0'; 			//make it null terminated

		while (buffer[index1] == ' ')		//skip over spaces
			index1++;


		index2 = 0;
		while (buffer[index1] != ' ' && buffer[index1] != '\0')		//Get last name
			temp[index2++] = buffer[index1++]
 			lname[index2] = '\0';



		while (buffer[index1]!=  ' ')
			fname[index2++]= buffer[index1++];
		fname[index2++] =  '\0'; 			//make it null terminated


		studentRecords[recNum].scores[scoreIndex] = 


		// Copy last name, coma, space, first name to full name
			ctrcpy_s (studentRecords[recNum].fullName,lName);
			strcat_s (studentRecords[recNum].fullName, ',  ');
			strcat_s (studentRecords[recNum].fullName, fName);




		printf ("%s  %d   %d  %d %d \n", studenrRecords[recNum].fullName,
			studentRecords[recNum].

					// temp test, remove after working



			for (scoreIndex =0; scoreIndex < 4; scoreIndex++)

		recNum++;

	} while (recNum <= maxNoOfRecords);

	return recNum;








}
