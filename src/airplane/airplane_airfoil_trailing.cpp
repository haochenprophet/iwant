#include "airplane_airfoil_trailing.h"
int Cairplane_airfoil_trailing::my_init(void *p)
{
	this->name = "Cairplane_airfoil_trailing";
	this->alias = "airplane_airfoil_trailing";
	return 0;
}

Cairplane_airfoil_trailing::Cairplane_airfoil_trailing()
{
	this->my_init();
}

Cairplane_airfoil_trailing::~Cairplane_airfoil_trailing()
{

}

#ifndef AIRPLANE_AIRFOIL_TRAILING_TEST
#define AIRPLANE_AIRFOIL_TRAILING_TEST 0//1
#endif

#if AIRPLANE_AIRFOIL_TRAILING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
