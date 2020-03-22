/*
w_stream.c
author: Peter Hartmann
version: 2020-03-18
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "w_stream.h"


int write(char src[]) {

	FILE *fileHandle;

	// Create file if not exists

	if ((fileHandle = fopen("data", "a")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}


	// Write into the file

	//char buffer[32];

	setbuf(fileHandle, NULL);

	fputs(src, fileHandle);


	// Close the file

	if (fclose(fileHandle))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
