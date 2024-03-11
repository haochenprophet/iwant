#include "car_go.h"
int Ccar_go::my_init(void *p)
{
	this->name = "Ccar_go";
	this->alias = "car_go";
	return 0;
}

Ccar_go::Ccar_go()
{
	this->my_init();
}

Ccar_go::~Ccar_go()
{

}

#ifndef CAR_GO_TEST
#define CAR_GO_TEST 0//1
#endif

#if CAR_GO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
