#include "airplane_under_carriage.h"
int Cairplane_under_carriage::my_init(void *p)
{
	this->name = "Cairplane_under_carriage";
	this->alias = "airplane_under_carriage";
	return 0;
}

Cairplane_under_carriage::Cairplane_under_carriage()
{
	this->my_init();
}

Cairplane_under_carriage::~Cairplane_under_carriage()
{

}

#ifndef AIRPLANE_UNDER_CARRIAGE_TEST
#define AIRPLANE_UNDER_CARRIAGE_TEST 0//1
#endif

#if AIRPLANE_UNDER_CARRIAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
