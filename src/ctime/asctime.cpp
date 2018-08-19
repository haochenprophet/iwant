#include "asctime.h"
int Casctime::my_init(void *p)
{
	this->name = "Casctime";
	this->alias = "asctime";
	return 0;
}

Casctime::Casctime()
{
	this->my_init();
}

Casctime::~Casctime()
{

}

#ifndef ASCTIME_TEST
#define ASCTIME_TEST 0//1
#endif

#if ASCTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ASCTIME_TEST\n\n";

	return 0;
}
#endif 