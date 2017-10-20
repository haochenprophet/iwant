#include "CMPPS.h"
int CCMPPS::my_init(void *p)
{
	this->name = "CCMPPS";
	this->alias = "CMPPS";
	return 0;
}

CCMPPS::CCMPPS()
{
	this->my_init();
}

CCMPPS::~CCMPPS()
{

}
