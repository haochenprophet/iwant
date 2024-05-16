#include "mars_construct.h"
int Cmars_construct::my_init(void *p)
{
	this->name = "Cmars_construct";
	this->alias = "mars_construct";
	return 0;
}

Cmars_construct::Cmars_construct()
{
	this->my_init();
}

Cmars_construct::~Cmars_construct()
{

}

#ifndef MARS_CONSTRUCT_TEST
#define MARS_CONSTRUCT_TEST 0//1
#endif

#if MARS_CONSTRUCT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
