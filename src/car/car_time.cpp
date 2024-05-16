#include "car_time.h"
int Ccar_time::my_init(void *p)
{
	this->name = "Ccar_time";
	this->alias = "car_time";
	return 0;
}

Ccar_time::Ccar_time()
{
	this->my_init();
}

Ccar_time::~Ccar_time()
{

}

#ifndef CAR_TIME_TEST
#define CAR_TIME_TEST 0//1
#endif

#if CAR_TIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
