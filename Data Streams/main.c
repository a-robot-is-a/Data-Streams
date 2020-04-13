/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-13
*/

#include <stdlib.h>
#include <stdio.h>
#include "gpio.h"

int main(int argc, char** argv) {

	FILE *stream;

	char buffer[22];

	if((stream = fopen("led.csv", "r")) == NULL)
	{
		puts("fopen() failed.");

		return EXIT_FAILURE;
	}

	fgets(buffer, 22, stream);	// get all pin num from csv file

	if(fclose(stream))
	{
		puts("fclose() failed.");
	}

	create(buffer);	// create GPIO file

/*
	char pin;
	puts("Enter pin num:");
	scanf("%c", &pin);

	direc(pin);	// set gpio as output
*/
	//light(pin,val);	// LED on GPIO 4 on/off



	//unset(buffer);	// unexport GPIO

	return 0;
}
