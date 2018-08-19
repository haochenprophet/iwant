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