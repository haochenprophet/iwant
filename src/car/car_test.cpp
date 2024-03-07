#include "car_test.h"
int Ccar_test::my_init(void *p)
{
	this->name = "Ccar_test";
	this->alias = "car_test";
	return 0;
}

Ccar_test::Ccar_test()
{
	this->my_init();
}

Ccar_test::~Ccar_test()
{

}

#ifndef CAR_TEST_TEST
#define CAR_TEST_TEST 0//1
#endif

#if CAR_TEST_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
