#include "ctime.h"
int Cctime::my_init(void *p)
{
	this->name = "Cctime";
	this->alias = "ctime";
	return 0;
}

Cctime::Cctime()
{
	this->my_init();
}

Cctime::~Cctime()
{

}

char* Cctime:: ctime_c(const time_t* timer)
{
	return ctime(timer);
}

#ifndef CTIME_TEST
#define CTIME_TEST 0//1
#endif

#if CTIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CTIME_TEST\n\n";

	return 0;
}
#endif 