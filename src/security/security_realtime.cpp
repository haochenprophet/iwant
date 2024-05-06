#include "security_realtime.h"
int Csecurity_realtime::my_init(void *p)
{
	this->name = "Csecurity_realtime";
	this->alias = "security_realtime";
	return 0;
}

Csecurity_realtime::Csecurity_realtime()
{
	this->my_init();
}

Csecurity_realtime::~Csecurity_realtime()
{

}

#ifndef SECURITY_REALTIME_TEST
#define SECURITY_REALTIME_TEST 0//1
#endif

#if SECURITY_REALTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
