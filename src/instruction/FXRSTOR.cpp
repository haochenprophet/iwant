#include "FXRSTOR.h"
int CFXRSTOR::my_init(void *p)
{
	this->name = "CFXRSTOR";
	this->alias = "FXRSTOR";
	return 0;
}

CFXRSTOR::CFXRSTOR()
{
	this->my_init();
}

CFXRSTOR::~CFXRSTOR()
{

}
