#include "plan.h"
int Cplan::my_init(void *p)
{
	this->name = "Cplan";
	this->alias = "plan";
	return 0;
}

Cplan::Cplan()
{
	this->my_init();
}

Cplan::~Cplan()
{

}
