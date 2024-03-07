#include "car_function.h"
int Ccar_function::my_init(void *p)
{
	this->name = "Ccar_function";
	this->alias = "car_function";
	return 0;
}

Ccar_function::Ccar_function()
{
	this->my_init();
}

Ccar_function::~Ccar_function()
{

}

#ifndef CAR_FUNCTION_TEST
#define CAR_FUNCTION_TEST 0//1
#endif

#if CAR_FUNCTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
