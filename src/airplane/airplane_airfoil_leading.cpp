#include "airplane_airfoil_leading.h"
int Cairplane_airfoil_leading::my_init(void *p)
{
	this->name = "Cairplane_airfoil_leading";
	this->alias = "airplane_airfoil_leading";
	return 0;
}

Cairplane_airfoil_leading::Cairplane_airfoil_leading()
{
	this->my_init();
}

Cairplane_airfoil_leading::~Cairplane_airfoil_leading()
{

}

#ifndef AIRPLANE_AIRFOIL_LEADING_TEST
#define AIRPLANE_AIRFOIL_LEADING_TEST 0//1
#endif

#if AIRPLANE_AIRFOIL_LEADING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
