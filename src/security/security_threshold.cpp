#include "security_threshold.h"
int Csecurity_threshold::my_init(void *p)
{
	this->name = "Csecurity_threshold";
	this->alias = "security_threshold";
	return 0;
}

Csecurity_threshold::Csecurity_threshold()
{
	this->my_init();
}

Csecurity_threshold::~Csecurity_threshold()
{

}

#ifndef SECURITY_THRESHOLD_TEST
#define SECURITY_THRESHOLD_TEST 0//1
#endif

#if SECURITY_THRESHOLD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
