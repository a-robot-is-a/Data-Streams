/*
Data streams and information psychology
author: Peter Hartmann
version:2020-04-05
*/

#include <stdlib.h>
#include <stdio.h>
#include "gpio.h"

int main(int argc, char** argv) {

	char pin;
	char val;

	printf("Pin_num Light_val: \n");
	scanf("%c %c", &pin, &val);

	set(val);	// Prepare GPIO (4) for work

	//light(pin,val);	// LED on GPIO 4 on/off

	//unset('4');	// Unexport GPIO (4)

	return 0;
}
