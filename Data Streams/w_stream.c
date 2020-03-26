/*
w_stream.c
author: Peter Hartmann
version: 2020-03-26
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "w_stream.h"


int write(char val) {

	FILE *fileHandle;

	// Create file

	if ((fileHandle = fopen("/sys/class/gpio/gpio4", "w")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}


	// Write into the file

	printf("Writing %c in file.\n", val);

	fprintf(fileHandle, "%c", val);


	// Close the file

	if (fclose(fileHandle))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
