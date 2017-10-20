#include "ROR.h"
int CROR::my_init(void *p)
{
	this->name = "CROR";
	this->alias = "ROR";
	return 0;
}

CROR::CROR()
{
	this->my_init();
}

CROR::~CROR()
{

}
