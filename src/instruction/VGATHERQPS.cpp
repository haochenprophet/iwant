#include "VGATHERQPS.h"
int CVGATHERQPS::my_init(void *p)
{
	this->name = "CVGATHERQPS";
	this->alias = "VGATHERQPS";
	return 0;
}

CVGATHERQPS::CVGATHERQPS()
{
	this->my_init();
}

CVGATHERQPS::~CVGATHERQPS()
{

}
