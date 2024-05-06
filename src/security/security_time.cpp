#include "security_time.h"
int Csecurity_time::my_init(void *p)
{
	this->name = "Csecurity_time";
	this->alias = "security_time";
	return 0;
}

Csecurity_time::Csecurity_time()
{
	this->my_init();
}

Csecurity_time::~Csecurity_time()
{

}

#ifndef SECURITY_TIME_TEST
#define SECURITY_TIME_TEST 0//1
#endif

#if SECURITY_TIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
