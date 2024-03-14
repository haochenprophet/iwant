#include "rocket_high.h"
int Crocket_high::my_init(void *p)
{
	this->name = "Crocket_high";
	this->alias = "rocket_high";
	return 0;
}

Crocket_high::Crocket_high()
{
	this->my_init();
}

Crocket_high::~Crocket_high()
{

}

#ifndef ROCKET_HIGH_TEST
#define ROCKET_HIGH_TEST 0//1
#endif

#if ROCKET_HIGH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
