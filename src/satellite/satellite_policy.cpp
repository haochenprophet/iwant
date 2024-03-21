#include "satellite_policy.h"
int Csatellite_policy::my_init(void *p)
{
	this->name = "Csatellite_policy";
	this->alias = "satellite_policy";
	return 0;
}

Csatellite_policy::Csatellite_policy()
{
	this->my_init();
}

Csatellite_policy::~Csatellite_policy()
{

}

#ifndef SATELLITE_POLICY_TEST
#define SATELLITE_POLICY_TEST 0//1
#endif

#if SATELLITE_POLICY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
