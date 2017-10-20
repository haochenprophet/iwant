#include "FNOP.h"
int CFNOP::my_init(void *p)
{
	this->name = "CFNOP";
	this->alias = "FNOP";
	return 0;
}

CFNOP::CFNOP()
{
	this->my_init();
}

CFNOP::~CFNOP()
{

}
