// stringtest.cpp : Defines the entry point for the console application.
// String Exercise

#include "stdafx.h"
#include <string.h>
void Trimmer(char[], int);

int main()
{
	char buffer[50];

	do
	{
		printf("Enter a sample string, press enter key to terminate: ");
		fgets(buffer, 50, stdin);
		printf("String: %s, Length of string is: %d\n", buffer, strlen(buffer));
		Trimmer(buffer, strlen(buffer));

	} while (strlen(buffer) > 1);

	return 0;
}

void Trimmer(char buffer[], int length)
{
	char c;
	int i;
	int j;

	// Remove leading spaces
	c = buffer[0];
	i = 0;
	while (c == ' ')
	{
		i++;
		c = buffer[i];
	}
	j = 0;
	while (c != ' ')
	{
		buffer[j++] = buffer[i++];
		c = buffer[i];
	}

	buffer[j++] = ' ';

	while (c == ' ')
	{
		i++;
		c = buffer[i];
	}

	while (c != ' ')
	{
		buffer[j++] = buffer[i++];
		c = buffer[i];
	}
	buffer[j] = '\0';
	printf("String: %s, Length of string is: %d\n", buffer, strlen(buffer));

}

