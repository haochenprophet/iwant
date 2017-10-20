#include "UNPCKLPS.h"
int CUNPCKLPS::my_init(void *p)
{
	this->name = "CUNPCKLPS";
	this->alias = "UNPCKLPS";
	return 0;
}

CUNPCKLPS::CUNPCKLPS()
{
	this->my_init();
}

CUNPCKLPS::~CUNPCKLPS()
{

}
