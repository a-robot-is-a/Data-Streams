/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-02
*/

#include <stdlib.h>
#include <stdio.h>

#define DIGITS 4

int main(int argc, char** argv) {

	int i;

	const char *header = "Pin,2,3,4,14,15,18,23,24";

	char *pattern[] = {

		"0,0,0,1,0,1,1,1",
		"0,0,1,1,0,1,1,1",
		"0,1,1,1,1,1,1,0",
		"0,0,1,1,0,1,1,0",
	};//string table

	printf(header);
	for (i = 0; i < DIGITS; i++)
	{
		printf("\nDigit%i,%s", i, pattern[i]);
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

	//fwrite(header, sizeof(char), sizeof(header), stream);

//	fwrite(buf, sizeof(char), sizeof(buf), stream);

	// Close the stream

	if(fclose(stream))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
