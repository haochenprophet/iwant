#include "airplane_mode.h"
int Cairplane_mode::my_init(void *p)
{
	this->name = "Cairplane_mode";
	this->alias = "airplane_mode";
	return 0;
}

Cairplane_mode::Cairplane_mode()
{
	this->my_init();
}

Cairplane_mode::~Cairplane_mode()
{

}

#ifndef AIRPLANE_MODE_TEST
#define AIRPLANE_MODE_TEST 0//1
#endif

#if AIRPLANE_MODE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
