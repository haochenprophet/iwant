#include "car_communication.h"
int Ccar_communication::my_init(void *p)
{
	this->name = "Ccar_communication";
	this->alias = "car_communication";
	return 0;
}

Ccar_communication::Ccar_communication()
{
	this->my_init();
}

Ccar_communication::~Ccar_communication()
{

}

#ifndef CAR_COMMUNICATION_TEST
#define CAR_COMMUNICATION_TEST 0//1
#endif

#if CAR_COMMUNICATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
