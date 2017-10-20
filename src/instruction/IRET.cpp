#include "IRET.h"
int CIRET::my_init(void *p)
{
	this->name = "CIRET";
	this->alias = "IRET";
	return 0;
}

CIRET::CIRET()
{
	this->my_init();
}

CIRET::~CIRET()
{

}
