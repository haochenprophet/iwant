#include "car_engine.h"
int Ccar_engine::my_init(void *p)
{
	this->name = "Ccar_engine";
	this->alias = "car_engine";
	return 0;
}

Ccar_engine::Ccar_engine()
{
	this->my_init();
}

Ccar_engine::~Ccar_engine()
{

}

#ifndef CAR_ENGINE_TEST
#define CAR_ENGINE_TEST 0//1
#endif

#if CAR_ENGINE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
