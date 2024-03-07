#include "car_appearance.h"
int Ccar_appearance::my_init(void *p)
{
	this->name = "Ccar_appearance";
	this->alias = "car_appearance";
	return 0;
}

Ccar_appearance::Ccar_appearance()
{
	this->my_init();
}

Ccar_appearance::~Ccar_appearance()
{

}

#ifndef CAR_APPEARANCE_TEST
#define CAR_APPEARANCE_TEST 0//1
#endif

#if CAR_APPEARANCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
