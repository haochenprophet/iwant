#include "car_impetus.h"
int Ccar_impetus::my_init(void *p)
{
	this->name = "Ccar_impetus";
	this->alias = "car_impetus";
	return 0;
}

Ccar_impetus::Ccar_impetus()
{
	this->my_init();
}

Ccar_impetus::~Ccar_impetus()
{

}

#ifndef CAR_IMPETUS_TEST
#define CAR_IMPETUS_TEST 0//1
#endif

#if CAR_IMPETUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
