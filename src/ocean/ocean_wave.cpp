#include "ocean_wave.h"
int Cocean_wave::my_init(void *p)
{
	this->name = "Cocean_wave";
	this->alias = "ocean_wave";
	return 0;
}

Cocean_wave::Cocean_wave()
{
	this->my_init();
}

Cocean_wave::~Cocean_wave()
{

}

#ifndef OCEAN_WAVE_TEST
#define OCEAN_WAVE_TEST 0//1
#endif

#if OCEAN_WAVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
