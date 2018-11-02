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
