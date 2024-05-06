#include "security_starttime.h"
int Csecurity_starttime::my_init(void *p)
{
	this->name = "Csecurity_starttime";
	this->alias = "security_starttime";
	return 0;
}

Csecurity_starttime::Csecurity_starttime()
{
	this->my_init();
}

Csecurity_starttime::~Csecurity_starttime()
{

}

#ifndef SECURITY_STARTTIME_TEST
#define SECURITY_STARTTIME_TEST 0//1
#endif

#if SECURITY_STARTTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
