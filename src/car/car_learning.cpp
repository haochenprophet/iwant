#include "car_learning.h"
int Ccar_learning::my_init(void *p)
{
	this->name = "Ccar_learning";
	this->alias = "car_learning";
	return 0;
}

Ccar_learning::Ccar_learning()
{
	this->my_init();
}

Ccar_learning::~Ccar_learning()
{

}

#ifndef CAR_LEARNING_TEST
#define CAR_LEARNING_TEST 0//1
#endif

#if CAR_LEARNING_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
