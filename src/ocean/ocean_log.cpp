#include "ocean_log.h"
int Cocean_log::my_init(void *p)
{
	this->name = "Cocean_log";
	this->alias = "ocean_log";
	return 0;
}

Cocean_log::Cocean_log()
{
	this->my_init();
}

Cocean_log::~Cocean_log()
{

}

#ifndef OCEAN_LOG_TEST
#define OCEAN_LOG_TEST 0//1
#endif

#if OCEAN_LOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
