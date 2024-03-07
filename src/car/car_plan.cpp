#include "car_plan.h"
int Ccar_plan::my_init(void *p)
{
	this->name = "Ccar_plan";
	this->alias = "car_plan";
	return 0;
}

Ccar_plan::Ccar_plan()
{
	this->my_init();
}

Ccar_plan::~Ccar_plan()
{

}

#ifndef CAR_PLAN_TEST
#define CAR_PLAN_TEST 0//1
#endif

#if CAR_PLAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
