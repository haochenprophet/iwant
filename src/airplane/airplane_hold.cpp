#include "airplane_hold.h"
int Cairplane_hold::my_init(void *p)
{
	this->name = "Cairplane_hold";
	this->alias = "airplane_hold";
	return 0;
}

Cairplane_hold::Cairplane_hold()
{
	this->my_init();
}

Cairplane_hold::~Cairplane_hold()
{

}

#ifndef AIRPLANE_HOLD_TEST
#define AIRPLANE_HOLD_TEST 0//1
#endif

#if AIRPLANE_HOLD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
