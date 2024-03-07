#include "car_memory.h"
int Ccar_memory::my_init(void *p)
{
	this->name = "Ccar_memory";
	this->alias = "car_memory";
	return 0;
}

Ccar_memory::Ccar_memory()
{
	this->my_init();
}

Ccar_memory::~Ccar_memory()
{

}

#ifndef CAR_MEMORY_TEST
#define CAR_MEMORY_TEST 0//1
#endif

#if CAR_MEMORY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
