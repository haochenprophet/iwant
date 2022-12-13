#include "mktime.h"
int Cmktime::my_init(void *p)
{
	this->name = "Cmktime";
	this->alias = "mktime";
	return 0;
}

Cmktime::Cmktime()
{
	this->my_init();
}

Cmktime::~Cmktime()
{

}

time_t Cmktime:: mktime_c(struct tm* timeptr)
{
	return mktime(timeptr);
}

#ifndef MKTIME_TEST
#define MKTIME_TEST 0//1
#endif

#if MKTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MKTIME_TEST\n\n";

	return 0;
}
#endif 