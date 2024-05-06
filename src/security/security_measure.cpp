#include "security_measure.h"
int Csecurity_measure::my_init(void *p)
{
	this->name = "Csecurity_measure";
	this->alias = "security_measure";
	return 0;
}

Csecurity_measure::Csecurity_measure()
{
	this->my_init();
}

Csecurity_measure::~Csecurity_measure()
{

}

#ifndef SECURITY_MEASURE_TEST
#define SECURITY_MEASURE_TEST 0//1
#endif

#if SECURITY_MEASURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
