#include "car_scheme.h"
int Ccar_scheme::my_init(void *p)
{
	this->name = "Ccar_scheme";
	this->alias = "car_scheme";
	return 0;
}

Ccar_scheme::Ccar_scheme()
{
	this->my_init();
}

Ccar_scheme::~Ccar_scheme()
{

}

#ifndef CAR_SCHEME_TEST
#define CAR_SCHEME_TEST 0//1
#endif

#if CAR_SCHEME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
