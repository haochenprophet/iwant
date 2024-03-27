#include "ocean_task.h"
int Cocean_task::my_init(void *p)
{
	this->name = "Cocean_task";
	this->alias = "ocean_task";
	return 0;
}

Cocean_task::Cocean_task()
{
	this->my_init();
}

Cocean_task::~Cocean_task()
{

}

#ifndef OCEAN_TASK_TEST
#define OCEAN_TASK_TEST 0//1
#endif

#if OCEAN_TASK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
