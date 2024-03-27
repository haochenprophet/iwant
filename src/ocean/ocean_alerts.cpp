#include "ocean_alerts.h"
int Cocean_alerts::my_init(void *p)
{
	this->name = "Cocean_alerts";
	this->alias = "ocean_alerts";
	return 0;
}

Cocean_alerts::Cocean_alerts()
{
	this->my_init();
}

Cocean_alerts::~Cocean_alerts()
{

}

#ifndef OCEAN_ALERTS_TEST
#define OCEAN_ALERTS_TEST 0//1
#endif

#if OCEAN_ALERTS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
