#include "car_ai.h"
int Ccar_ai::my_init(void *p)
{
	this->name = "Ccar_ai";
	this->alias = "car_ai";
	return 0;
}

Ccar_ai::Ccar_ai()
{
	this->my_init();
}

Ccar_ai::~Ccar_ai()
{

}

#ifndef CAR_AI_TEST
#define CAR_AI_TEST 0//1
#endif

#if CAR_AI_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
