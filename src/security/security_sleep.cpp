#include "security_sleep.h"
int Csecurity_sleep::my_init(void *p)
{
	this->name = "Csecurity_sleep";
	this->alias = "security_sleep";
	return 0;
}

Csecurity_sleep::Csecurity_sleep()
{
	this->my_init();
}

Csecurity_sleep::~Csecurity_sleep()
{

}

#ifndef SECURITY_SLEEP_TEST
#define SECURITY_SLEEP_TEST 0//1
#endif

#if SECURITY_SLEEP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
