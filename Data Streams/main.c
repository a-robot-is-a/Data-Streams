/*
Data streams and information psychology
author: Peter Hartmann
version:2020-03-31
*/

#include <stdlib.h>
#include <stdio.h>

#include "w_stream.h"
#include "getTime.h"

int main(int argc, char** argv) {

	write(get());	// get the time and save it in the data.txt

	return 0;
}
