#include "material_flow.h"
int Cmaterial_flow::my_init(void *p)
{
	this->name = "Cmaterial_flow";
	this->alias = "material_flow";
	return 0;
}

Cmaterial_flow::Cmaterial_flow()
{
	this->my_init();
}

Cmaterial_flow::~Cmaterial_flow()
{

}

#ifndef MATERIAL_FLOW_TEST
#define MATERIAL_FLOW_TEST 0//1
#endif

#if MATERIAL_FLOW_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
