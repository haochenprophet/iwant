#include "car_body.h"
int Ccar_body::my_init(void *p)
{
	this->name = "Ccar_body";
	this->alias = "car_body";
	return 0;
}

Ccar_body::Ccar_body()
{
	this->my_init();
}

Ccar_body::~Ccar_body()
{

}

#ifndef CAR_BODY_TEST
#define CAR_BODY_TEST 0//1
#endif

#if CAR_BODY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
