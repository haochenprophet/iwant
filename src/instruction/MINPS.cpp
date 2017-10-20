#include "MINPS.h"
int CMINPS::my_init(void *p)
{
	this->name = "CMINPS";
	this->alias = "MINPS";
	return 0;
}

CMINPS::CMINPS()
{
	this->my_init();
}

CMINPS::~CMINPS()
{

}
