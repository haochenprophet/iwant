#include "rocket_size.h"
int Crocket_size::my_init(void *p)
{
	this->name = "Crocket_size";
	this->alias = "rocket_size";
	return 0;
}

Crocket_size::Crocket_size()
{
	this->my_init();
}

Crocket_size::~Crocket_size()
{

}

#ifndef ROCKET_SIZE_TEST
#define ROCKET_SIZE_TEST 0//1
#endif

#if ROCKET_SIZE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
