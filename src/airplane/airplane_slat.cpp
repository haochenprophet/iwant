#include "airplane_slat.h"
int Cairplane_slat::my_init(void *p)
{
	this->name = "Cairplane_slat";
	this->alias = "airplane_slat";
	return 0;
}

Cairplane_slat::Cairplane_slat()
{
	this->my_init();
}

Cairplane_slat::~Cairplane_slat()
{

}

#ifndef AIRPLANE_SLAT_TEST
#define AIRPLANE_SLAT_TEST 0//1
#endif

#if AIRPLANE_SLAT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
