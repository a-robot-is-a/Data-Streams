/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-26
*/

#include <stdlib.h>
#include <stdio.h>
#include "w_stream.h"

int main(int argc, char** argv) {

	char val;

	printf("LED Eingabe 0/1: ");
	scanf("%c", &val);

	write(val);	// LED on GPIO 4 on/off

	system("pause");

	return 0;
}
