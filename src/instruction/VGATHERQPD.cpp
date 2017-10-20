#include "VGATHERQPD.h"
int CVGATHERQPD::my_init(void *p)
{
	this->name = "CVGATHERQPD";
	this->alias = "VGATHERQPD";
	return 0;
}

CVGATHERQPD::CVGATHERQPD()
{
	this->my_init();
}

CVGATHERQPD::~CVGATHERQPD()
{

}
