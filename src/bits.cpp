#include "bits.h"

int Cbits::my_init(void *p)
{
	this->name = "Cbits";
	this->alias = "bits";
	return 0;
}

Cbits::Cbits()
{
	this->my_init();
}

#ifndef BITS_TEST
#define BITS_TEST 0//1
#endif


#if BITS_TEST
int main(int argc, char *argv[])
{

	return 0;
}
#endif 