#include "car_work.h"
int Ccar_work::my_init(void *p)
{
	this->name = "Ccar_work";
	this->alias = "car_work";
	return 0;
}

Ccar_work::Ccar_work()
{
	this->my_init();
}

Ccar_work::~Ccar_work()
{

}

#ifndef CAR_WORK_TEST
#define CAR_WORK_TEST 0//1
#endif

#if CAR_WORK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
