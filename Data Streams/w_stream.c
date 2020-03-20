/*
w_stream.c
author: Peter Hartmann
version: 2020-03-18
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "w_stream.h"


int write(char *time) {

	int i = 0;

	int counter = 0;

	//char dest[MAX];


	FILE* fileHandle;

	// Create file

	if ((fileHandle = fopen("data", "a")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}


	// Write a string into the file

	//memset(dest, '\0', sizeof(dest));

	//strcpy(src, "Nachrichten");

	//strcpy(dest, src);

	for (i = 0; time[i] != '\0'; i++)
	{
		counter = i;
	}

	fwrite(time, sizeof(char), counter, fileHandle);

	// Close the file

	if (fclose(fileHandle))
	{
		printf("fclose() failed\n");
	}

	return 0;
}
