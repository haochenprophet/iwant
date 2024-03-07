#include "car_help.h"
int Ccar_help::my_init(void *p)
{
	this->name = "Ccar_help";
	this->alias = "car_help";
	return 0;
}

Ccar_help::Ccar_help()
{
	this->my_init();
}

Ccar_help::~Ccar_help()
{

}

#ifndef CAR_HELP_TEST
#define CAR_HELP_TEST 0//1
#endif

#if CAR_HELP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
