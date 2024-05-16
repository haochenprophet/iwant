#include "car_tyre.h"
int Ccar_tyre::my_init(void *p)
{
	this->name = "Ccar_tyre";
	this->alias = "car_tyre";
	return 0;
}

Ccar_tyre::Ccar_tyre()
{
	this->my_init();
}

Ccar_tyre::~Ccar_tyre()
{

}

#ifndef CAR_TYRE_TEST
#define CAR_TYRE_TEST 0//1
#endif

#if CAR_TYRE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
