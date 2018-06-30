//Mauricio Feldman-Abe
//CS 50
//Project 2: Printing diamond shaped on console
//June 25, 2018
//Due Date: July 1, 2018
//Apple Xcode /VS Code for Mac
//Compiler clang / g++ on Terminal


#include <stdio.h>
//#include <stdafx>             //error on xcode, used stdio.h instead
#include <time.h>               //for time() function
#include <stdlib.h>             //for sran() and rand() functions

#define UPPER_LIMIT     35      //for random number
#define LOWER_LIMIT     19       //for random number
#define TOP             1
#define BOTTOM          2


// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int topOrBottom);
void PrintTopCharacters(int);
void PrintBottomCharacters(int);
void PrintMiddleLine(int);

//No Global variables


int main(void)
{
    //Generate random number of rows:
    int num;
    srand(time(NULL));              //Seed random number
    num = rand() % (UPPER_LIMIT - LOWER_LIMIT +1) + LOWER_LIMIT;
    if (num % 2 == 0) num = num + 1;    //if random number is even, add on to become odd

   // printf ("\n This is the generated number of rows:  %d \n", num);  //remove after testing

    PrintStudentInfo (TOP);
    // MAIN CODE GOES HERE:

    PrintTopCharacters (num);
    PrintMiddleLine (num);
    PrintBottomCharacters (num);

    //END MAIN CODE
     PrintStudentInfo (BOTTOM);

return 0;

}

// ===========
void PrintStudentInfo (int topOrBottom)
{
    if (topOrBottom == TOP)
        printf ("Mauricio Feldman-Abe - Project 2 DIAMOND \n\n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Program \n\n\n");
}

// =====================

void PrintTopCharacters (int num)
{
    int i;                   //loops over total number
    int j;                   //loops spaces
    int k;                   //loops characters

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= (num-i); j++)
        {
            printf(" ");
        }
        for (k = 0;  k < i-1; k++)
        {
            printf("M");
        }
        for (k = i; k <= (2*i-1); k++)
        {
            printf("M");
        }
        for (j = 1; j <= (num-i); j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

// =====================

void PrintBottomCharacters (int num)
{
    int i;
    int j;
    int k;
    for (i = num; i >= 1; i--)
    {
        for (j = 0; j < num-i; j++)
        {
            printf(" ");
        }
        for (k = i;  k <= (2*i-1); k++)
        {
            printf("F");
        }
        for (k = 0; k < i-1; k++)
        {
            printf("F");
        }
        for (j = 0; j < num-i; j++)
        {
            printf(" ");
        }
         printf("\n");
    }
    printf("\n\n\n");
}

// ==============================
void PrintMiddleLine (int num)
{
    int i;
    for (i = 1; i <= num*2-1; i++)
        {
            printf("=");
        }
            printf("\n");
}
