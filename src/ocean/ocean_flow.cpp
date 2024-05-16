#include "ocean_flow.h"
int Cocean_flow::my_init(void *p)
{
	this->name = "Cocean_flow";
	this->alias = "ocean_flow";
	return 0;
}

Cocean_flow::Cocean_flow()
{
	this->my_init();
}

Cocean_flow::~Cocean_flow()
{

}

#ifndef OCEAN_FLOW_TEST
#define OCEAN_FLOW_TEST 0//1
#endif

#if OCEAN_FLOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
