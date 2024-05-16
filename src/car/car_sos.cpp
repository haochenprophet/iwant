#include "car_sos.h"
int Ccar_sos::my_init(void *p)
{
	this->name = "Ccar_sos";
	this->alias = "car_sos";
	return 0;
}

Ccar_sos::Ccar_sos()
{
	this->my_init();
}

Ccar_sos::~Ccar_sos()
{

}

#ifndef CAR_SOS_TEST
#define CAR_SOS_TEST 0//1
#endif

#if CAR_SOS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
