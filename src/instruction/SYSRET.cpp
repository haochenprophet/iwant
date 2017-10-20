#include "SYSRET.h"
int CSYSRET::my_init(void *p)
{
	this->name = "CSYSRET";
	this->alias = "SYSRET";
	return 0;
}

CSYSRET::CSYSRET()
{
	this->my_init();
}

CSYSRET::~CSYSRET()
{

}
