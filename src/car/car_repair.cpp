#include "car_repair.h"
int Ccar_repair::my_init(void *p)
{
	this->name = "Ccar_repair";
	this->alias = "car_repair";
	return 0;
}

Ccar_repair::Ccar_repair()
{
	this->my_init();
}

Ccar_repair::~Ccar_repair()
{

}

#ifndef CAR_REPAIR_TEST
#define CAR_REPAIR_TEST 0//1
#endif

#if CAR_REPAIR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
