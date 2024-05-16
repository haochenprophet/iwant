#include "car_key.h"
int Ccar_key::my_init(void *p)
{
	this->name = "Ccar_key";
	this->alias = "car_key";
	return 0;
}

Ccar_key::Ccar_key()
{
	this->my_init();
}

Ccar_key::~Ccar_key()
{

}

#ifndef CAR_KEY_TEST
#define CAR_KEY_TEST 0//1
#endif

#if CAR_KEY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
