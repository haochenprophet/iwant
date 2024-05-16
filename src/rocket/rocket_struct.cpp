#include "rocket_struct.h"
int Crocket_struct::my_init(void *p)
{
	this->name = "Crocket_struct";
	this->alias = "rocket_struct";
	return 0;
}

Crocket_struct::Crocket_struct()
{
	this->my_init();
}

Crocket_struct::~Crocket_struct()
{

}

#ifndef ROCKET_STRUCT_TEST
#define ROCKET_STRUCT_TEST 0//1
#endif

#if ROCKET_STRUCT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
