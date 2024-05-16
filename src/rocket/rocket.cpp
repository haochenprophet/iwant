#include "rocket.h"
int Crocket::my_init(void *p)
{
	this->name = "Crocket";
	this->alias = "rocket";
	return 0;
}

Crocket::Crocket()
{
	this->my_init();
}

Crocket::~Crocket()
{

}

#ifndef ROCKET_TEST
#define ROCKET_TEST 0//1
#endif

#if ROCKET_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
