/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-31
*/

#include <stdlib.h>
#include <stdio.h>

#define DIGITS 4
#define PINS	8

int main(int argc, char** argv) {

	int i, j;

	int pattern[DIGITS][PINS] = {

		{0,0,0,1,0,1,1,1},
		{0,0,1,1,0,1,1,1},
		{0,1,1,1,1,1,1,0},
		{0,0,1,1,0,1,1,0},
	};

	printf("Pin:2:3:4:14:15:18:23:24");
	for (i = 0; i < DIGITS; i++)
	{
		printf("\nDigit%i:", i);

		for (j = 0; j < PINS; j++)
		{
			printf("%i:", pattern[i][j]);
		}
	}

	// Make file

	const char *pins = "Pin:2:3:4:14:15:18:23:24";

	FILE *stream;

	stream = fopen("led.csv", "w");

	if( NULL == stream )
	{
		printf("\nfopen() failed");

		return EXIT_FAILURE;
	}

	setbuf(stream, NULL);

	fputs(pins, stream);

	// ToDo: try char buffer[][] ? - for pattern


	if(fclose(stream))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
