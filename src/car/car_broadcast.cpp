#include "car_broadcast.h"
int Ccar_broadcast::my_init(void *p)
{
	this->name = "Ccar_broadcast";
	this->alias = "car_broadcast";
	return 0;
}

Ccar_broadcast::Ccar_broadcast()
{
	this->my_init();
}

Ccar_broadcast::~Ccar_broadcast()
{

}

#ifndef CAR_BROADCAST_TEST
#define CAR_BROADCAST_TEST 0//1
#endif

#if CAR_BROADCAST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
