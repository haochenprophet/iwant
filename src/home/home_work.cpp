#include "home_work.h"
int Chome_work::my_init(void *p)
{
	this->name = "Chome_work";
	this->alias = "home_work";
	return 0;
}

Chome_work::Chome_work()
{
	this->my_init();
}

Chome_work::~Chome_work()
{

}

#ifndef HOME_WORK_TEST
#define HOME_WORK_TEST 0//1
#endif

#if HOME_WORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
