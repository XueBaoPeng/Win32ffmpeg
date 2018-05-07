#define __STDC_CONSTANT_MACROS

extern "C"

{
#include "include\libavcodec\avcodec.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
}

int 

int main(int argc, char* argv[]) {

	printf("%s", avcodec_configuration());

	return 0;
}