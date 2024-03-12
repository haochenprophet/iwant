#include "airplane_take_off.h"
int Cairplane_take_off::my_init(void *p)
{
	this->name = "Cairplane_take_off";
	this->alias = "airplane_take_off";
	return 0;
}

Cairplane_take_off::Cairplane_take_off()
{
	this->my_init();
}

Cairplane_take_off::~Cairplane_take_off()
{

}

#ifndef AIRPLANE_TAKE_OFF_TEST
#define AIRPLANE_TAKE_OFF_TEST 0//1
#endif

#if AIRPLANE_TAKE_OFF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
