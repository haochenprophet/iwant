#include "security_rain.h"
int Csecurity_rain::my_init(void *p)
{
	this->name = "Csecurity_rain";
	this->alias = "security_rain";
	return 0;
}

Csecurity_rain::Csecurity_rain()
{
	this->my_init();
}

Csecurity_rain::~Csecurity_rain()
{

}

#ifndef SECURITY_RAIN_TEST
#define SECURITY_RAIN_TEST 0//1
#endif

#if SECURITY_RAIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
