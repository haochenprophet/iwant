#include "car_logo.h"
int Ccar_logo::my_init(void *p)
{
	this->name = "Ccar_logo";
	this->alias = "car_logo";
	return 0;
}

Ccar_logo::Ccar_logo()
{
	this->my_init();
}

Ccar_logo::~Ccar_logo()
{

}

#ifndef CAR_LOGO_TEST
#define CAR_LOGO_TEST 0//1
#endif

#if CAR_LOGO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
