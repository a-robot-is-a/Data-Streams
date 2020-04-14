/*
gpio.c
author: Peter Hartmann
version: 2020-04-17
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "gpio.h"

FILE *file;

int i;

char digit[] = {0,0};

int counter = 0;

int create(char buffer[]) {

	// Create gpio file

	if ((file = fopen("/sys/class/gpio/export", "w")) == 0)
	{
		puts("fopen() failed");

		return 0;
	}

	setbuf(file, NULL);

	for(i = 0; i < 22; i++)
	{
		if(buffer[i] != ',')
		{
			digit[counter] = buffer[i];

			counter = 1;
		}
		else if(buffer[i] != '\0')
		{
			counter = 0;	// transmit at ','

			fputs(digit, file);
		}
	}

	if (fclose(file)) {puts("fclose() failed");}

	return 0;
}
/*
int direc(char buffer[]){

	char path[] = "/sys/class/gpio";

	char dest[] = "/gpio";

	char destAdd[] = "/direction";

	// Set gpio as output

	char dir[] = "out";

	for(i = 0; i < 22; i++)
	{
		if(buffer[i] != ',');
		{
			digit[counter] = buffer[i];

			counter = 1;
		}
		else if(buffer[i] != '\0')
		{
			for(i = 0; digit[i] != '0'; i++)
			{
				strcat(path, digit[i]);
			}

			counter = 0;

			strcat(path, destAdd);

			if ((file = fopen(path, "w")) == 0)
				{printf("fopen() failed\n");return 0;}

			setbuf(file, NULL);

			// Write in the file

			fputs(dir, file);

			// close the stream

			if(fclose(file)){puts("fclose() direc() failed");}
		}
	}
	return 0;
}
*/
/*int light(char pin, char val){

	//  open the stream

	char dest[] = "/gpioX/value";
	dest[5] = pin;
	strcat(path, dest);

	if ((file = fopen(path, "w")) == 0)
	{ printf("fopen() value failed\n"); return 0;}

	// write the value

	fprintf(file, "%c", val);

	// Close the stream

	fflush(file);

	return 0;
}
*/
int unset(char buffer[]){

	// Open the stream

	if ((file = fopen("/sys/class/gpio/unexport", "w")) == 0)
	{ printf("fopen() unexport failed\n"); return 0; }

	// Close the pin

	setbuf(file, NULL);

	for(i = 0; i < 22; i++)
	{
		if(buffer[i] != ',')
		{
			digit[counter] = buffer[i];

			counter = 1;
		}
		else if(buffer[i] != '\0')
		{
			counter = 0;

			fputs(digit, file);
		}
	}

	// Close the stream

	if (fclose(file)) { puts("fclose() unexport failed"); }

	return 0;
}

