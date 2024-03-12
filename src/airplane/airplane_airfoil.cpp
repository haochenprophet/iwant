#include "airplane_airfoil.h"
int Cairplane_airfoil::my_init(void *p)
{
	this->name = "Cairplane_airfoil";
	this->alias = "airplane_airfoil";
	return 0;
}

Cairplane_airfoil::Cairplane_airfoil()
{
	this->my_init();
}

Cairplane_airfoil::~Cairplane_airfoil()
{

}

#ifndef AIRPLANE_AIRFOIL_TEST
#define AIRPLANE_AIRFOIL_TEST 0//1
#endif

#if AIRPLANE_AIRFOIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
