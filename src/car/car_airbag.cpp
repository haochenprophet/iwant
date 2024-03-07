#include "car_airbag.h"
int Ccar_airbag::my_init(void *p)
{
	this->name = "Ccar_airbag";
	this->alias = "car_airbag";
	return 0;
}

Ccar_airbag::Ccar_airbag()
{
	this->my_init();
}

Ccar_airbag::~Ccar_airbag()
{

}

#ifndef CAR_AIRBAG_TEST
#define CAR_AIRBAG_TEST 0//1
#endif

#if CAR_AIRBAG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
