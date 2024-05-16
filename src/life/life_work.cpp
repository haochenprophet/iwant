#include "life_work.h"
int Clife_work::my_init(void *p)
{
	this->name = "Clife_work";
	this->alias = "life_work";
	return 0;
}

Clife_work::Clife_work()
{
	this->my_init();
}

Clife_work::~Clife_work()
{

}

#ifndef LIFE_WORK_TEST
#define LIFE_WORK_TEST 0//1
#endif

#if LIFE_WORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
