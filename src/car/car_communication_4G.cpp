#include "car_communication_4G.h"
int Ccar_communication_4G::my_init(void *p)
{
	this->name = "Ccar_communication_4G";
	this->alias = "car_communication_4G";
	return 0;
}

Ccar_communication_4G::Ccar_communication_4G()
{
	this->my_init();
}

Ccar_communication_4G::~Ccar_communication_4G()
{

}

#ifndef CAR_COMMUNICATION_4G_TEST
#define CAR_COMMUNICATION_4G_TEST 0//1
#endif

#if CAR_COMMUNICATION_4G_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
