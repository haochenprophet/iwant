#include "car_cpu.h"
int Ccar_cpu::my_init(void *p)
{
	this->name = "Ccar_cpu";
	this->alias = "car_cpu";
	return 0;
}

Ccar_cpu::Ccar_cpu()
{
	this->my_init();
}

Ccar_cpu::~Ccar_cpu()
{

}

#ifndef CAR_CPU_TEST
#define CAR_CPU_TEST 0//1
#endif

#if CAR_CPU_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
