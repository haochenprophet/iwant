#include "FSINCOS.h"
int CFSINCOS::my_init(void *p)
{
	this->name = "CFSINCOS";
	this->alias = "FSINCOS";
	return 0;
}

CFSINCOS::CFSINCOS()
{
	this->my_init();
}

CFSINCOS::~CFSINCOS()
{

}
