/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-18
*/

#include <stdlib.h>
#include <stdio.h>
#include "w_stream.h"
#include "r_stream.h"
#include "getTime.h"

int main(int argc, char** argv) {

	write(get());	// get the time and save it in the data.txt

	read();

	system("pause");

	return 0;

}
