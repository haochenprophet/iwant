#include "car_trunk.h"
int Ccar_trunk::my_init(void *p)
{
	this->name = "Ccar_trunk";
	this->alias = "car_trunk";
	return 0;
}

Ccar_trunk::Ccar_trunk()
{
	this->my_init();
}

Ccar_trunk::~Ccar_trunk()
{

}

#ifndef CAR_TRUNK_TEST
#define CAR_TRUNK_TEST 0//1
#endif

#if CAR_TRUNK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
