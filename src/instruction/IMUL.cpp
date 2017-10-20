#include "IMUL.h"
int CIMUL::my_init(void *p)
{
	this->name = "CIMUL";
	this->alias = "IMUL";
	return 0;
}

CIMUL::CIMUL()
{
	this->my_init();
}

CIMUL::~CIMUL()
{

}
