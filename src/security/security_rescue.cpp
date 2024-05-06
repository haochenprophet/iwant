#include "security_rescue.h"
int Csecurity_rescue::my_init(void *p)
{
	this->name = "Csecurity_rescue";
	this->alias = "security_rescue";
	return 0;
}

Csecurity_rescue::Csecurity_rescue()
{
	this->my_init();
}

Csecurity_rescue::~Csecurity_rescue()
{

}

#ifndef SECURITY_RESCUE_TEST
#define SECURITY_RESCUE_TEST 0//1
#endif

#if SECURITY_RESCUE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
