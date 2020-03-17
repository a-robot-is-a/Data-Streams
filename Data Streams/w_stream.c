/*
w_stream.c
author: Peter Hartmann
version: 2020-03-17
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "w_stream.h"


void write(char src[]) {
	
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

	for (i = 0; src[i] != '\0'; i++)
	{
		counter = i;
	}

	fwrite(src, sizeof(char), counter, fileHandle);

	// Close the file

	if (fclose(fileHandle))
	{
		printf("fclose() failed\n");
	}
}
