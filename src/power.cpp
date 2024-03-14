#include "power.h"
int Cpower::my_init(void *p)
{
	this->name = "Cpower";
	this->alias = "power";
	return 0;
}

Cpower::Cpower()
{
	this->my_init();
}

Cpower::~Cpower()
{

}

#ifndef POWER_TEST
#define POWER_TEST 0//1
#endif

#if POWER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
