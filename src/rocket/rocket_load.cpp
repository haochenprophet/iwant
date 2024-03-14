#include "rocket_load.h"
int Crocket_load::my_init(void *p)
{
	this->name = "Crocket_load";
	this->alias = "rocket_load";
	return 0;
}

Crocket_load::Crocket_load()
{
	this->my_init();
}

Crocket_load::~Crocket_load()
{

}

#ifndef ROCKET_LOAD_TEST
#define ROCKET_LOAD_TEST 0//1
#endif

#if ROCKET_LOAD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
