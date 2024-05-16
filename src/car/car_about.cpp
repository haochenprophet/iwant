#include "car_about.h"
int Ccar_about::my_init(void *p)
{
	this->name = "Ccar_about";
	this->alias = "car_about";
	return 0;
}

Ccar_about::Ccar_about()
{
	this->my_init();
}

Ccar_about::~Ccar_about()
{

}

#ifndef CAR_ABOUT_TEST
#define CAR_ABOUT_TEST 0//1
#endif

#if CAR_ABOUT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
