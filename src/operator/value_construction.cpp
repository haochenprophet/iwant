#include "value_construction.h"
int Cvalue_construction::my_init(void *p)
{
	this->name = "Cvalue_construction";
	this->alias = "value_construction";
	this->symbol = "type(exp)";
	this->op_priority = 2;
	return 0;
}

Cvalue_construction::Cvalue_construction()
{
	this->my_init();
}

Cvalue_construction::~Cvalue_construction()
{

}

#ifndef VALUE_CONSTRUCTION_TEST
#define VALUE_CONSTRUCTION_TEST 0//1
#endif

#if VALUE_CONSTRUCTION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "VALUE_CONSTRUCTION_TEST\n\n";

	return 0;
}
#endif 