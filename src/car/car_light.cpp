#include "car_light.h"
int Ccar_light::my_init(void *p)
{
	this->name = "Ccar_light";
	this->alias = "car_light";
	return 0;
}

Ccar_light::Ccar_light()
{
	this->my_init();
}

Ccar_light::~Ccar_light()
{

}

#ifndef CAR_LIGHT_TEST
#define CAR_LIGHT_TEST 0//1
#endif

#if CAR_LIGHT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
