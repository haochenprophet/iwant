#include "PEXTRD.h"
int CPEXTRD::my_init(void *p)
{
	this->name = "CPEXTRD";
	this->alias = "PEXTRD";
	return 0;
}

CPEXTRD::CPEXTRD()
{
	this->my_init();
}

CPEXTRD::~CPEXTRD()
{

}
