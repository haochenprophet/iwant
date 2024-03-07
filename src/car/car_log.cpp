#include "car_log.h"
int Ccar_log::my_init(void *p)
{
	this->name = "Ccar_log";
	this->alias = "car_log";
	return 0;
}

Ccar_log::Ccar_log()
{
	this->my_init();
}

Ccar_log::~Ccar_log()
{

}

#ifndef CAR_LOG_TEST
#define CAR_LOG_TEST 0//1
#endif

#if CAR_LOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
