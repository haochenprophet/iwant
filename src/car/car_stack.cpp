#include "car_stack.h"
int Ccar_stack::my_init(void *p)
{
	this->name = "Ccar_stack";
	this->alias = "car_stack";
	return 0;
}

Ccar_stack::Ccar_stack()
{
	this->my_init();
}

Ccar_stack::~Ccar_stack()
{

}

#ifndef CAR_STACK_TEST
#define CAR_STACK_TEST 0//1
#endif

#if CAR_STACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
