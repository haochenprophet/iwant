#include "rocket_cowling.h"
int Crocket_cowling::my_init(void *p)
{
	this->name = "Crocket_cowling";
	this->alias = "rocket_cowling";
	return 0;
}

Crocket_cowling::Crocket_cowling()
{
	this->my_init();
}

Crocket_cowling::~Crocket_cowling()
{

}

#ifndef ROCKET_COWLING_TEST
#define ROCKET_COWLING_TEST 0//1
#endif

#if ROCKET_COWLING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
