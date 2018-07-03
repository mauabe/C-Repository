//Mauricio Feldman-Abe
//CS 50
//Project 3: Bubble Sort
//July 3, 2018
//Due Date: July 5, 2018
//Apple Xcode  
//Compiler clang / g++ on Terminal


#include <stdio.h>
//#include <stdafx>
#include <time.h>               //for time() function
#include <stdlib.h>             //for sran() and rand() functions

#define UPPER_LIMIT     20      //for random number
#define LOWER_LIMIT     12      //for random number
#define TOP             1
#define BOTTOM          2
#define ARRAY_MAX_SIZE  20

// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int topOrBottom);
void CreateRandomNumbers (int [], int, int, int);
//void PrintRandomNumbers (int [], int);


//No Global variables


int main(void)
{
    
    
    
    int sampleData [ARRAY_MAX_SIZE];
    int sampleSize;
    srand(time(NULL));              //Seed random number
    sampleSize = rand() % (UPPER_LIMIT - LOWER_LIMIT +1) + LOWER_LIMIT;


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
        printf ("Mauricio Feldman-Abe - Project 3 Bubble Sort \n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Project 3 \n\n");
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
        printf ("%2d", sampleData[i]);
    printf("\n");
}

// =====================
void CreateRamdomArray (in array[], int ArraySize, )
    
    const int ArraySize = 20;
    int array[ArraySize],
    srand(time(NULL));

    for (int i = 0; i < ArraySize, i++){
        array[i] = CreateRandomNumbers()
    }

    

// =====================
void SortArrayBubbleImproved (int samples[], int sampleSize)
{
    #define False 0
    #define True 1

    int index1;
    int index2;
    int index3;
    int tempValue;
    in sorted = false;



    printf("Sorting  .......  \n\n");
    for (index = 0; index1 < sampleSize && !sorted; index++)
    {
        sorted = true;
        for index2 = 0; index 2 < sampleSize - index1; index2++)
            if (samples[index2 -2] > samples [index2])
            {
                tempValue = samples [index2 - 1];
                samples [index2] = samples [index2 - 1];
                samples [index2 - 1] = tempValue;
            }
    }
}


