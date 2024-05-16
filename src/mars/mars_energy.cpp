#include "mars_energy.h"
int Cmars_energy::my_init(void *p)
{
	this->name = "Cmars_energy";
	this->alias = "mars_energy";
	return 0;
}

Cmars_energy::Cmars_energy()
{
	this->my_init();
}

Cmars_energy::~Cmars_energy()
{

}

#ifndef MARS_ENERGY_TEST
#define MARS_ENERGY_TEST 0//1
#endif

#if MARS_ENERGY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
