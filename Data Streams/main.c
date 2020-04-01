/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-01
*/

#include <stdlib.h>
#include <stdio.h>

#define DIGITS 4
#define PINS	8 + 8	// + 8 for the comma

int main(int argc, char** argv) {

	int i, j;

	char pattern[DIGITS][PINS] = {

		"0,0,0,1,0,1,1,1",
		"0,0,1,1,0,1,1,1",
		"0,1,1,1,1,1,1,0",
		"0,0,1,1,0,1,1,0",
	};

	printf("Pin,2,3,4,14,15,18,23,24");
	for (i = 0; i < DIGITS; i++)
	{
		printf("\nDigit%i,", i);

		for (j = 0; j < PINS; j++)
		{
			printf("%c", pattern[i][j]);
		}
	}

	// Make file

	FILE *stream;

	stream = fopen("led.csv", "w");

	if( NULL == stream )
	{
		printf("\nfopen() failed");

		return EXIT_FAILURE;
	}

	// ToDo: Write to file

	char *pins = "Pin,2,3,4,14,15,18,23,24";

	for (i = 0; i < DIGITS; i++)
	{
		printf("\nDigit%i,", i);

		for (j = 0; j < PINS; j++)
		{
			printf("%c", pattern[i][j]);
		}
	}

	fputs(pins, stream);

	// Close the stream

	if(fclose(stream))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
