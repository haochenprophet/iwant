#include "car_task.h"
int Ccar_task::my_init(void *p)
{
	this->name = "Ccar_task";
	this->alias = "car_task";
	return 0;
}

Ccar_task::Ccar_task()
{
	this->my_init();
}

Ccar_task::~Ccar_task()
{

}

#ifndef CAR_TASK_TEST
#define CAR_TASK_TEST 0//1
#endif

#if CAR_TASK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
