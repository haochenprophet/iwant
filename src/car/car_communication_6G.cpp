#include "car_communication_6G.h"
int Ccar_communication_6G::my_init(void *p)
{
	this->name = "Ccar_communication_6G";
	this->alias = "car_communication_6G";
	return 0;
}

Ccar_communication_6G::Ccar_communication_6G()
{
	this->my_init();
}

Ccar_communication_6G::~Ccar_communication_6G()
{

}

#ifndef CAR_COMMUNICATION_6G_TEST
#define CAR_COMMUNICATION_6G_TEST 0//1
#endif

#if CAR_COMMUNICATION_6G_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
