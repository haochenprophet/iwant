#include "ocean_escape.h"
int Cocean_escape::my_init(void *p)
{
	this->name = "Cocean_escape";
	this->alias = "ocean_escape";
	return 0;
}

Cocean_escape::Cocean_escape()
{
	this->my_init();
}

Cocean_escape::~Cocean_escape()
{

}

#ifndef OCEAN_ESCAPE_TEST
#define OCEAN_ESCAPE_TEST 0//1
#endif

#if OCEAN_ESCAPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
