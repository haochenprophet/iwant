#include "FNSAVE.h"
int CFNSAVE::my_init(void *p)
{
	this->name = "CFNSAVE";
	this->alias = "FNSAVE";
	return 0;
}

CFNSAVE::CFNSAVE()
{
	this->my_init();
}

CFNSAVE::~CFNSAVE()
{

}
