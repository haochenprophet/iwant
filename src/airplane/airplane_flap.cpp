#include "airplane_flap.h"
int Cairplane_flap::my_init(void *p)
{
	this->name = "Cairplane_flap";
	this->alias = "airplane_flap";
	return 0;
}

Cairplane_flap::Cairplane_flap()
{
	this->my_init();
}

Cairplane_flap::~Cairplane_flap()
{

}

#ifndef AIRPLANE_FLAP_TEST
#define AIRPLANE_FLAP_TEST 0//1
#endif

#if AIRPLANE_FLAP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
