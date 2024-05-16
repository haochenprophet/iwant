#include "car_communication_5G.h"
int Ccar_communication_5G::my_init(void *p)
{
	this->name = "Ccar_communication_5G";
	this->alias = "car_communication_5G";
	return 0;
}

Ccar_communication_5G::Ccar_communication_5G()
{
	this->my_init();
}

Ccar_communication_5G::~Ccar_communication_5G()
{

}

#ifndef CAR_COMMUNICATION_5G_TEST
#define CAR_COMMUNICATION_5G_TEST 0//1
#endif

#if CAR_COMMUNICATION_5G_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
