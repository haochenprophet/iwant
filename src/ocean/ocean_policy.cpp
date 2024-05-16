#include "ocean_policy.h"
int Cocean_policy::my_init(void *p)
{
	this->name = "Cocean_policy";
	this->alias = "ocean_policy";
	return 0;
}

Cocean_policy::Cocean_policy()
{
	this->my_init();
}

Cocean_policy::~Cocean_policy()
{

}

#ifndef OCEAN_POLICY_TEST
#define OCEAN_POLICY_TEST 0//1
#endif

#if OCEAN_POLICY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
