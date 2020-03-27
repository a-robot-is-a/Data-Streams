/*
gpio.c
author: Peter Hartmann
version: 2020-03-26
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "gpio.h"

FILE *file;

int set(char val) {

	// Create file gpio file

	if ((file = fopen("/sys/class/gpio/export", "w")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}

	// Write the file

	fprintf(file, "%c", val);

	// Close the stream

	if (fclose(file))
	{
		printf("fclose() failed\n");
	}

	// Set gpio as output

	if ((file = fopen("/sys/class/gpio/gpio4/direction", "w")) == 0)
	{
		printf("fopen() failed\n");

		return 0;
	}

	// Write in the file

	char dir[] = "out";

	setbuf(file, NULL);

	fputs(dir, file);

	// Close the stream

	if (fclose(file)) {printf("fclose() failed\n");}

	return 0;
}

int light(char val){

	//  open the stream

	if ((file = fopen("/sys/class/gpio/gpio4/value", "w")) == 0)
	{ printf("fopen() value failed\n"); return 0;}

	// write the value

	fprintf(file, "%c", val);

	// Close the stream

	if (fclose(file)) { printf("fclose() value failed\n"); }

	return 0;
}

int unset(char val){

	// Open the stream

	if ((file = fopen("/sys/class/gpio/unexport", "w")) == 0)
	{ printf("fopen() unexport failed\n"); return 0; }

	// Close the pin

	fprintf(file, "%c", val);

	// Close the stream

	if (fclose(file)) { printf("fclose() unexport failed\n"); }

	return 0;
}