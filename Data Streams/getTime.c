/*
getTime.c
author: Peter Hartmann
version: 2020-03-20
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "getTime.h"

char *get() {

	time_t current_time;
	char* c_time_string;

	/* Obtain current time. */
	current_time = time(NULL);

	if (current_time == ((time_t)-1))
	{
		(void)fprintf(stderr, "Failure to obtain the current time.\n");
		exit(EXIT_FAILURE);
	}

	/* Convert to local time format. */
	c_time_string = ctime(&current_time);

	if (c_time_string == NULL)
	{
		(void)fprintf(stderr, "Failure to convert the current time.\n");
		exit(EXIT_FAILURE);
	}

	/* Print to stdout. ctime() has already added a terminating newline character. */
	(void)printf("Current time is %s", c_time_string);

	return c_time_string;
}