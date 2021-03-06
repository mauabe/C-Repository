// Exercise 10, Page 121
/* Write A function called PrintMoney that takes as integer as its parameter and prints it
with dollar sign and with two digits after decimal point. For example 835 will be printed
as $8.35. 1200 will be printed $12.00, 0 will be printed $.00
*/

// Test data: 0, 2, 12, 123, 1234, 12345, 865, 1000. Print each money on one line.
// Must print: $.00, $.02, $.12, $1.23, $12.34 $123.45 $8.65 $10.00, repectively. 

// Include atatements
#include "stdafx.h"			// For IO

// Function prototypes (No need to name parameters in function prototypes)
void PrintMoney(int);

int main(void)
{
	PrintMoney(0);
	PrintMoney(2);
	PrintMoney(12);
	PrintMoney(123);
	PrintMoney(1234);
	PrintMoney(12345);
	PrintMoney(865);
	PrintMoney(1000);

	return 0;
}

void PrintMoney(int money)
{
	int dollars;
	int cents;
	dollars = money / 100;
	cents = money % 100;
	printf("$");
	if (dollars > 0)
		printf("%d", dollars);

	printf(".");
	printf("%02d", cents);
	printf("\n");

}