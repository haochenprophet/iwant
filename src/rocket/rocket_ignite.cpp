#include "rocket_ignite.h"
int Crocket_ignite::my_init(void *p)
{
	this->name = "Crocket_ignite";
	this->alias = "rocket_ignite";
	return 0;
}

Crocket_ignite::Crocket_ignite()
{
	this->my_init();
}

Crocket_ignite::~Crocket_ignite()
{

}

#ifndef ROCKET_IGNITE_TEST
#define ROCKET_IGNITE_TEST 0//1
#endif

#if ROCKET_IGNITE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
