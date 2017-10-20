#include "FCOS.h"
int CFCOS::my_init(void *p)
{
	this->name = "CFCOS";
	this->alias = "FCOS";
	return 0;
}

CFCOS::CFCOS()
{
	this->my_init();
}

CFCOS::~CFCOS()
{

}
