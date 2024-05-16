#include "car_status.h"
int Ccar_status::my_init(void *p)
{
	this->name = "Ccar_status";
	this->alias = "car_status";
	return 0;
}

Ccar_status::Ccar_status()
{
	this->my_init();
}

Ccar_status::~Ccar_status()
{

}

#ifndef CAR_STATUS_TEST
#define CAR_STATUS_TEST 0//1
#endif

#if CAR_STATUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
