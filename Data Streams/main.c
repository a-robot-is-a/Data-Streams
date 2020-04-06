/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-06
*/

#include <stdlib.h>
#include <stdio.h>
#include "gpio.h"

int main(int argc, char** argv) {

	int i;

	char buffer[21];

	FILE *stream;

	if((stream = fopen("led.csv", "r")) == NULL)
	{
		puts("fopen() failed.");

		return EXIT_FAILURE;
	}

	fgets(buffer, 21, stream);	// get all pin num

	if(fclose(stream))
	{
		puts("fclose() failed.");
	}

	create(buffer);	// create GPIO file

	//light(pin,val);	// LED on GPIO 4 on/off

	//unset('4');	// Unexport GPIO (4)

	return 0;
}
