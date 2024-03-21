#include "satellite_action.h"
int Csatellite_action::my_init(void *p)
{
	this->name = "Csatellite_action";
	this->alias = "satellite_action";
	return 0;
}

Csatellite_action::Csatellite_action()
{
	this->my_init();
}

Csatellite_action::~Csatellite_action()
{

}

#ifndef SATELLITE_ACTION_TEST
#define SATELLITE_ACTION_TEST 0//1
#endif

#if SATELLITE_ACTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
