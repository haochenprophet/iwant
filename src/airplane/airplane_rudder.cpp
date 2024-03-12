#include "airplane_rudder.h"
int Cairplane_rudder::my_init(void *p)
{
	this->name = "Cairplane_rudder";
	this->alias = "airplane_rudder";
	return 0;
}

Cairplane_rudder::Cairplane_rudder()
{
	this->my_init();
}

Cairplane_rudder::~Cairplane_rudder()
{

}

#ifndef AIRPLANE_RUDDER_TEST
#define AIRPLANE_RUDDER_TEST 0//1
#endif

#if AIRPLANE_RUDDER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
