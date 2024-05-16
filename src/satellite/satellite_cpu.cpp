#include "satellite_cpu.h"
int Csatellite_cpu::my_init(void *p)
{
	this->name = "Csatellite_cpu";
	this->alias = "satellite_cpu";
	return 0;
}

Csatellite_cpu::Csatellite_cpu()
{
	this->my_init();
}

Csatellite_cpu::~Csatellite_cpu()
{

}

#ifndef SATELLITE_CPU_TEST
#define SATELLITE_CPU_TEST 0//1
#endif

#if SATELLITE_CPU_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
