#include "mars.h"
int Cmars::my_init(void *p)
{
	this->name = "Cmars";
	this->alias = "mars";
	return 0;
}

Cmars::Cmars()
{
	this->my_init();
}

Cmars::~Cmars()
{

}

#ifndef MARS_TEST
#define MARS_TEST 0//1
#endif

#if MARS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
