/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-17
*/

#include <stdlib.h>
#include <stdio.h>
#include "w_stream.h"
#include "r_stream.h"

int main(int argc, char** argv) {

	char src[40];

	printf("Eingabe: ");
	fgets(src, 40, stdin);

	write(src);

	read();

	system("pause");

	return 0;

}