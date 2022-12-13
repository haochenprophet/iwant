#include "localtime.h"
int Clocaltime::my_init(void *p)
{
	this->name = "Clocaltime";
	this->alias = "localtime";
	return 0;
}

Clocaltime::Clocaltime()
{
	this->my_init();
}

Clocaltime::~Clocaltime()
{

}

struct tm* Clocaltime::localtime_c(const time_t* timer)
{
	return localtime(timer);
}

#ifndef LOCALTIME_TEST
#define LOCALTIME_TEST 0//1
#endif

#if LOCALTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LOCALTIME_TEST\n\n";

	return 0;
}
#endif 