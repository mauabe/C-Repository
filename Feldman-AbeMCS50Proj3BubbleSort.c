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
#define UPL             99      //for random number in array
#define LOWL            10      //for random number in array
#define TOP             1
#define BOTTOM          2
#define ARRAY_MAX_SIZE  20       //size of array
#define false           0        //for sorting
#define true            1        //for sorting


// Function prototypes (No need to name paramenters in function prototypes)
void PrintStudentInfo (int );
void CreateRandomNumbers (int [], int, int, int);
void PrintRandomNumbers (int [], int);
void SortArrayBubbleImproved (int [], int);
void FindAverage( int [], int );
void FindMedian(int [], int );
void FindMinAndMax (int [], int);


//No Global variables


int main(void)
{
    
    int sampleData [ARRAY_MAX_SIZE];
    int sampleSize = 20 ;
    srand(time(NULL));              //Seed random number
    sampleSize = rand() % (UPPER_LIMIT - LOWER_LIMIT +1) + LOWER_LIMIT;    //create random number of elements in array

      PrintStudentInfo (TOP);
      printf("Number of random numbers: ");
      printf("%2d", sampleSize);
      printf ("\n\n");
      printf("Sample Data: \n");
      CreateRandomNumbers (sampleData, sampleSize, LOWL, UPL);
      PrintRandomNumbers (sampleData, sampleSize);
      printf ("\n");
      FindAverage( sampleData , sampleSize);
      printf ("\n");
      FindMinAndMax( sampleData,  sampleSize);
      printf ("\n");
    
      SortArrayBubbleImproved ( sampleData, sampleSize);
    
      FindMedian( sampleData, sampleSize);

      PrintStudentInfo (BOTTOM);

return 0;

}

// ===============
void PrintStudentInfo (int topOrBottom)
{
    if (topOrBottom == TOP)
        printf ("Mauricio Feldman-Abe - Project 3 Bubble Sort \n\n");
    else if(topOrBottom == BOTTOM)
        printf("Mauricio Feldman-Abe - End of Project 3 \n\n");
}

// ================
void CreateRandomNumbers (int sampleData[], int sampleSize, int LL, int UL)
{
    int i;
    
    for (i = 0; i < sampleSize; i++)
        sampleData[i] = (rand() % (UL - LL + 1)) + LL;
}
// ===============
 void PrintRandomNumbers (int sampleData[], int sampleSize)
{
    int i;
    for (i = 0; i < sampleSize; i++)
        printf ("%3d", sampleData[i]);
    printf("\n");
}

// =====================
void SortArrayBubbleImproved (int sampleData [], int sampleSize)
{

    int index1;
    int index2;
    int index3;
    int tempValue;
    int i;
    int min = sampleData [0];
    int max = sampleData [0];
    
    
    
    int sorted = false;         // Assume array is not sorted

    printf("Sorting (Improved)  .......  \n\n");
    for (index1 = 0; index1 < sampleSize && !sorted; index1++)
    {
        sorted = true;          // assume array is sorted
        for (index2 = 0; index2 < sampleSize - index1; index2++)
            if (sampleData[index2 - 1] > sampleData [index2])       //verify if elements are out of order
            {
                tempValue = sampleData [index2];
                sampleData [index2] = sampleData [index2 - 1];
                sampleData [index2 - 1] = tempValue;
                sorted = false;                                     // define if array is sorted

                   for (i = 0; i < sampleSize; i++)
                        printf ("%3d", sampleData[i]);
                    printf("\n");
            }
     }
    printf("\n");

}

// ========================

 void FindMinAndMax  (int sampleData[], int sampleSize)
{
 //   int min;
    int max = sampleData[0];
    int min = sampleData[0];
    int i;

    for ( i = 0; i < sampleSize; i++)
    {
        if (min > sampleData[i])
            min =  sampleData[i];
    
        if (max < sampleData[i])
            max =  sampleData[i];
    }
    
    printf ("The minimum value is: ");
    printf ("%d", min);
    printf (" — The maximum value is: ");
    printf ("%d", max);
    printf ("\n");
}

// ========================
void FindAverage( int sampleData [], int sampleSize)
{
    int sum = 0;
    int i;
    float average;

    for (i = 0; i < sampleSize; i++)
       sum += sampleData [i];
    
    average = (float) sum / sampleSize;
    printf ("The average is: " );
    printf ("%.0f", average);
    printf ("\n");

}
// ========================
void FindMedian( int sampleData [], int sampleSize)
{
    //int sampleData [];
    //int sampleSize;
    int n;
    int median;

    if( sampleSize % 2 == 1)
    {
        n = sampleSize / 2;
    }
    else ( n = ((sampleSize / 2) + (sampleSize / 2 - 1)) / 2 );
    
    median = sampleData [n];
        printf ("The median is: ");
    printf ("%2d", median);
    printf ("\n\n");
}



