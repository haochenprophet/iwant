#include "car_mode_cold.h"
int Ccar_mode_cold::my_init(void *p)
{
	this->name = "Ccar_mode_cold";
	this->alias = "car_mode_cold";
	return 0;
}

Ccar_mode_cold::Ccar_mode_cold()
{
	this->my_init();
}

Ccar_mode_cold::~Ccar_mode_cold()
{

}

#ifndef CAR_MODE_COLD_TEST
#define CAR_MODE_COLD_TEST 0//1
#endif

#if CAR_MODE_COLD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
