#include "car_map.h"
int Ccar_map::my_init(void *p)
{
	this->name = "Ccar_map";
	this->alias = "car_map";
	return 0;
}

Ccar_map::Ccar_map()
{
	this->my_init();
}

Ccar_map::~Ccar_map()
{

}

#ifndef CAR_MAP_TEST
#define CAR_MAP_TEST 0//1
#endif

#if CAR_MAP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
