#include "car_action.h"
int Ccar_action::my_init(void *p)
{
	this->name = "Ccar_action";
	this->alias = "car_action";
	return 0;
}

Ccar_action::Ccar_action()
{
	this->my_init();
}

Ccar_action::~Ccar_action()
{

}

#ifndef CAR_ACTION_TEST
#define CAR_ACTION_TEST 0//1
#endif

#if CAR_ACTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
