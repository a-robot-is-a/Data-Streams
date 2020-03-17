/*
stream pointer
author: Peter Hartmann
version: 2020-03-17
*/

#include <stdio.h>
#include "r_stream.h"

FILE *stream;

void read() {

	char c;

	// Open for read

	if((stream=fopen("data", "r"))==0)
	{
		printf("The file 'data' was not opened\n");
	}
	else
	{
		printf("The file 'data' is open\n");

		while(1)
		{
			c=fgetc(stream);
			if(feof(stream))
			{
				break;
			}
			printf("%c", c);
		}
	}


	// Close stream if it is not NULL

	if(stream)
	{
		if(fclose(stream))
		{
			printf("The file 'data' was not closed\n");
		}
	}
}
