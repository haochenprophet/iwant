#include "car_projector.h"
int Ccar_projector::my_init(void *p)
{
	this->name = "Ccar_projector";
	this->alias = "car_projector";
	return 0;
}

Ccar_projector::Ccar_projector()
{
	this->my_init();
}

Ccar_projector::~Ccar_projector()
{

}

#ifndef CAR_PROJECTOR_TEST
#define CAR_PROJECTOR_TEST 0//1
#endif

#if CAR_PROJECTOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
