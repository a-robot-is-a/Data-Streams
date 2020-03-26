/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-26
*/

#include <stdlib.h>
#include <stdio.h>
#include "gpio.h"


int main(int argc, char** argv) {

	char val;

	printf("LED Eingabe 0/1: ");
	scanf("%c", &val);

	//set(val);	// Prepare GPIO (4) for work

	light(val);	// LED on GPIO 4 on/off

	//unset(val);	// Unexport GPIO (4)

	system("pause");

	return 0;
}
