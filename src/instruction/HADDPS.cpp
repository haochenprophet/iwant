#include "HADDPS.h"
int CHADDPS::my_init(void *p)
{
	this->name = "CHADDPS";
	this->alias = "HADDPS";
	return 0;
}

CHADDPS::CHADDPS()
{
	this->my_init();
}

CHADDPS::~CHADDPS()
{

}
