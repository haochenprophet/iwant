#include "car_mirror.h"
int Ccar_mirror::my_init(void *p)
{
	this->name = "Ccar_mirror";
	this->alias = "car_mirror";
	return 0;
}

Ccar_mirror::Ccar_mirror()
{
	this->my_init();
}

Ccar_mirror::~Ccar_mirror()
{

}

#ifndef CAR_MIRROR_TEST
#define CAR_MIRROR_TEST 0//1
#endif

#if CAR_MIRROR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
