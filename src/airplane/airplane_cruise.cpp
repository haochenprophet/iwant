#include "airplane_cruise.h"
int Cairplane_cruise::my_init(void *p)
{
	this->name = "Cairplane_cruise";
	this->alias = "airplane_cruise";
	return 0;
}

Cairplane_cruise::Cairplane_cruise()
{
	this->my_init();
}

Cairplane_cruise::~Cairplane_cruise()
{

}

#ifndef AIRPLANE_CRUISE_TEST
#define AIRPLANE_CRUISE_TEST 0//1
#endif

#if AIRPLANE_CRUISE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
