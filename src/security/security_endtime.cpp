#include "security_endtime.h"
int Csecurity_endtime::my_init(void *p)
{
	this->name = "Csecurity_endtime";
	this->alias = "security_endtime";
	return 0;
}

Csecurity_endtime::Csecurity_endtime()
{
	this->my_init();
}

Csecurity_endtime::~Csecurity_endtime()
{

}

#ifndef SECURITY_ENDTIME_TEST
#define SECURITY_ENDTIME_TEST 0//1
#endif

#if SECURITY_ENDTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
