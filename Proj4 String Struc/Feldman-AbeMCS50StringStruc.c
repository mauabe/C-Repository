//Mauricio Feldman-Abe
//CS 50
//Project 2: String Struc
//July 12, 2018//Due Date: July 15, 2018
//Apple Xcode for Mac
//Compiler clang / g++ on Terminal



#include <stdio.h>
//#include <stdafx>             //error on xcode, used stdio.h instead
#include <string.h>				// For string functions
#include <stlib.h>			// not available,  compiler error ???


const char * sampleData[] = {
                                "Eduardo Gomez 82 90 73 95",
								"Melissa    Roberts   60   63 54  87",
								"Jordan Jones   88  70 84     76",
								"Carlos     Omar   78   93  94    95",
								"Ziba Word   66   67   76  78",
								"George    Profit   66   88 89    87",
								"Salah    Ali   75   75 89  83",
								"Juan    Martin    82   84 58  85",
								"ZZ",
							};

char * sampleData2 [] = {
                                "Eduardo Gomez 82 90 73 95",
                                "Melissa    D.   Roberts   60   63 54  87",
                                "Jordan J.   Jones      88  70 84     76",
                                "Carlos     Omar   78   93  94    95",
                                "Ziba A. Word   66   67   76  78",
                                "George   R.   Profit   66   88 89    87",
                                "Salah    A.  Ali   75   75 89  83",
                                "Juan    Martin    82   84 58  85",
                                "ZZ"
};

typedef struct 				// Define a record type
    {
        char fullName[25];
        int scores[4];
        int total;
        char grade;
    } StudentRecType;			// Name of new type


#define MAX_NUM_OF_RECORDS		10
#define TOP             1
#define BOTTOM          2

//void PrintStudentInfo(int);

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int);

int GetRecords (StudentRecType [], char * [], int );

void PrintRecords(StudentRecType [], int );

void AssignGrades(StudentRecType [], int );



//No Global variables



// ========================================

int main(void)
{
    StudentRecType studentRecords[MAX_NUM_OF_RECORDS];
    int numOfRecords;

    PrintStudentInfo (TOP);     //Print my information
        //START MAIN CODE
    
    
    numOfRecords = GetRecords (studentRecords, sampleData, MAX_NUM_OF_RECORDS);

        if (numOfRecords > 0)
        {	
            AssignGrades (studentRecords, numOfRecords);
            PrintRecords (studentRecords, numOfRecords);
        }
    
    //END MAIN CODE
            
    //Enhancement
           // Middle Initial = one character
           //Followed by a dot
           // after first name
    
    PrintStudentInfo (BOTTOM);

	return 0;
}




// =================================================================

int GetRecords (StudentRecType studentRecords [], char * sampleData[], int maxNoOfRecords);

{
	int recNum;
	char buffer[100];				// Work array
	char fname[20];					// First name
	char lname[20];					// Last name
	int index1;
	int index2;	
	char temp[10];					// used to hold ASCII number
	int score;
	int scoreIndex;

	recNum = 0;

	do
	{
		strcpy_s (buffer, sampleData [recNum]);	// Copy a line of data into buffer
			if ((buffer[0] | 32) == 'z' && (buffer[1] | 32) == 'z')		//Exit when find two capital "ZZ"
			break;

		printf ("%s\n testing", buffer);			// temp test, remove after working
		
		index1 = index2 = 0;				//starting point

		while (buffer[index1] !=  ' ')		// get first name
			fname[index2++] = buffer[index1++];
		fname[index2++] = '\0'; 			//make it null terminated

		while (buffer[index1] == ' ')		//skip over spaces
			index1++;

		index2 = 0;							//re-initialize
		while (buffer[index1] != ' ')		// get last name
			lname[index2++] = buffer[index1++];		
			lname [index2] = '\0';			//make null terminated

		// Copy last name, coma, space, first name to full name
			strcpy_s (studentRecords[recNum].fullName, lname);
			strcat_s (studentRecords[recNum].fullName, ",  ");
			strcat_s (studentRecords[recNum].fullName, fname);

        printf ("TEST:     " "%s  %s   %s   \n", studentRecords[recNum].fullName, studentRecords[recNum].lname, studentRecords[recNum].fname)        //???????
		// temp test, remove after working

		for (scoreIndex = 0; scoreIndex < 4; scoreIndex++)		//lop to get 4 scores
		{
			while (buffer[index1] == ' ')						// skip over spaces
				index1++;

			index2 =0;

			while (buffer[index1] != ' ' && buffer[index1] != '\0')	// get score if not empty and not the end
				temp[index2++] =  buffer[index1++];
			temp[index2] = '\0';							// make null terminated

			score = atoi (temp);							// Convert ASCII string to number

			studentRecords [recNum].scores[scoreIndex] = score;		//enter score into record
		}
		recNum++;
	}
	while (recNum <= maxNoOfRecords);

	return recNum;

}

// ===================
void AssignGrades(StudentRecType studentRecords[], int numOfRecords)
{
	int recNum;
	int scoreIndex;
	int average;

	for( recNum = 0; recNum < numOfRecords; recNum++)
	{
		studentRecords[recNum].total = 0;
		for (scoreIndex = 0; scoreIndex < 4; scoreIndex++)
            studentRecords[recNum].total += studentRecords[recNum].scores[scoreIndex];

		average = studentRecords[recNum].total /4;

		if(average >= 90)
			studentRecords[recNum].grade = 'A';
		else if (average >= 80)
			studentRecords[recNum].grade = 'B';
		else if (average >= 70)
			studentRecords[recNum].grade = 'C';
		else if (average >= 60)
			studentRecords[recNum].grade = 'D';
		else  
			studentRecords[recNum].grade = 'F';
		//printf("%5d", studentRecords[recNum].grade)
	}
}
// =========================
void PrintRecords(StudentRecType studentRecords[], int numOfRecords)
{
	int recNum;
	int scoreIndex;
	int average;
	int grade;
    
	// Print Headers
    prinf ("  Last Name, First Name     "),
    printf ("       Scores        ");
    printf (" Total    ");
    printf ("Grades \n");

    printf ("----------------------------");
    printf ("------------------   ");
    printf ("-----");
    printf ("------\n");

           
	for (recNum =0; recNum < numOfRecords; recNum++)
    {
        printf("%-25s", studentRecords[recNum].fullName);
        
        for (scoreIndex = 0; scoreIndex < 4; scoreIndex++)
		printf("%20d", studentRecords[recNum].scores[scoreIndex]);    //printf scores
	
        printf("%5d", studentRecords[recNum].total );                //printf Total
        
        printf("  %5s  \n", studentRecords[recNum].grade );                  //printf grades
    }
    
	//printf("END OF LOOPING AROUND\n\n\n");
    
}



// ===========
void PrintStudentInfo (int topOrBottom)
{
    if (topOrBottom == TOP)
        printf ("Mauricio Feldman-Abe - Project 4 String Struc \n\n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Program \n\n\n");
}







