/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-18
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "w_stream.h"
#include "r_stream.h"

int main(int argc, char** argv) {

	char src[32];

	printf("Eingabe: ");
	fgets(src, 32, stdin);

	write(src);

	read();

	system("pause");

	return 0;

}
