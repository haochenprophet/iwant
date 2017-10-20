#include "PAND.h"
int CPAND::my_init(void *p)
{
	this->name = "CPAND";
	this->alias = "PAND";
	return 0;
}

CPAND::CPAND()
{
	this->my_init();
}

CPAND::~CPAND()
{

}
