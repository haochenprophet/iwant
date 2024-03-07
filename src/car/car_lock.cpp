#include "car_lock.h"
int Ccar_lock::my_init(void *p)
{
	this->name = "Ccar_lock";
	this->alias = "car_lock";
	return 0;
}

Ccar_lock::Ccar_lock()
{
	this->my_init();
}

Ccar_lock::~Ccar_lock()
{

}

#ifndef CAR_LOCK_TEST
#define CAR_LOCK_TEST 0//1
#endif

#if CAR_LOCK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
