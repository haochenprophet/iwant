#include "VGETEXPPS.h"
int CVGETEXPPS::my_init(void *p)
{
	this->name = "CVGETEXPPS";
	this->alias = "VGETEXPPS";
	return 0;
}

CVGETEXPPS::CVGETEXPPS()
{
	this->my_init();
}

CVGETEXPPS::~CVGETEXPPS()
{

}
