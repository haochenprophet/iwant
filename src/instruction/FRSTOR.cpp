#include "FRSTOR.h"
int CFRSTOR::my_init(void *p)
{
	this->name = "CFRSTOR";
	this->alias = "FRSTOR";
	return 0;
}

CFRSTOR::CFRSTOR()
{
	this->my_init();
}

CFRSTOR::~CFRSTOR()
{

}
