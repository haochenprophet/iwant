#include "car_suspension.h"
int Ccar_suspension::my_init(void *p)
{
	this->name = "Ccar_suspension";
	this->alias = "car_suspension";
	return 0;
}

Ccar_suspension::Ccar_suspension()
{
	this->my_init();
}

Ccar_suspension::~Ccar_suspension()
{

}

#ifndef CAR_SUSPENSION_TEST
#define CAR_SUSPENSION_TEST 0//1
#endif

#if CAR_SUSPENSION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
