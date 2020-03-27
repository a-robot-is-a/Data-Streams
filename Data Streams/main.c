/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-27
*/

#include <stdlib.h>
#include <stdio.h>
#include "gpio.h"

int main(int argc, char** argv) {

	char val;

	printf("Turn light on/off: 1/0\n");
	scanf("%c", &val);

	//set('4');	// Prepare GPIO (4) for work

	//light(val);	// LED on GPIO 4 on/off

	unset('4');	// Unexport GPIO (4)

	return 0;
}
