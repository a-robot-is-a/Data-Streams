/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-06
*/

#include <stdlib.h>
#include <stdio.h>
//#include "gpio.h"

int main(int argc, char** argv) {

	int i;

	FILE *stream;

	if((stream = fopen("led.csv", "r")) == NULL)
	{
		puts("fopen() failed.");

		return EXIT_FAILURE;
	}

	char c;

	while( (c = fgetc(stream)) != ',')
	{
		putchar(c);
	}

	if(fclose(stream))
	{
		puts("fclose() failed.");
	}

	//create(val);	// create GPIO file

	//light(pin,val);	// LED on GPIO 4 on/off

	//unset('4');	// Unexport GPIO (4)

	return 0;
}
