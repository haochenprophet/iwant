#include "car_hood.h"
int Ccar_hood::my_init(void *p)
{
	this->name = "Ccar_hood";
	this->alias = "car_hood";
	return 0;
}

Ccar_hood::Ccar_hood()
{
	this->my_init();
}

Ccar_hood::~Ccar_hood()
{

}

#ifndef CAR_HOOD_TEST
#define CAR_HOOD_TEST 0//1
#endif

#if CAR_HOOD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
