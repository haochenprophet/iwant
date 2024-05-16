#include "ocean_work.h"
int Cocean_work::my_init(void *p)
{
	this->name = "Cocean_work";
	this->alias = "ocean_work";
	return 0;
}

Cocean_work::Cocean_work()
{
	this->my_init();
}

Cocean_work::~Cocean_work()
{

}

#ifndef OCEAN_WORK_TEST
#define OCEAN_WORK_TEST 0//1
#endif

#if OCEAN_WORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
