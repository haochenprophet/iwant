#include "car_mode_hot.h"
int Ccar_mode_hot::my_init(void *p)
{
	this->name = "Ccar_mode_hot";
	this->alias = "car_mode_hot";
	return 0;
}

Ccar_mode_hot::Ccar_mode_hot()
{
	this->my_init();
}

Ccar_mode_hot::~Ccar_mode_hot()
{

}

#ifndef CAR_MODE_HOT_TEST
#define CAR_MODE_HOT_TEST 0//1
#endif

#if CAR_MODE_HOT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
