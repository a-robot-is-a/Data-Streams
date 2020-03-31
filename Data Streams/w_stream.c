/*
w_stream.c
author: Peter Hartmann
version: 2020-03-26
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "w_stream.h"


int write(char *time) {

	FILE *fileHandle;

	// Create file

	if ((fileHandle = fopen("data", "a")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}

	// Write into the file

	//char buffer[32];

	setbuf(fileHandle, NULL);

	fputs(time, fileHandle);

	// Close the file

	if (fclose(fileHandle))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
