#include "car_colour.h"
int Ccar_colour::my_init(void *p)
{
	this->name = "Ccar_colour";
	this->alias = "car_colour";
	return 0;
}

Ccar_colour::Ccar_colour()
{
	this->my_init();
}

Ccar_colour::~Ccar_colour()
{

}

#ifndef CAR_COLOUR_TEST
#define CAR_COLOUR_TEST 0//1
#endif

#if CAR_COLOUR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
