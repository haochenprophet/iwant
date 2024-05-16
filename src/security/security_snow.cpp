#include "security_snow.h"
int Csecurity_snow::my_init(void *p)
{
	this->name = "Csecurity_snow";
	this->alias = "security_snow";
	return 0;
}

Csecurity_snow::Csecurity_snow()
{
	this->my_init();
}

Csecurity_snow::~Csecurity_snow()
{

}

#ifndef SECURITY_SNOW_TEST
#define SECURITY_SNOW_TEST 0//1
#endif

#if SECURITY_SNOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
