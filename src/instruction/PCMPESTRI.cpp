#include "PCMPESTRI.h"
int CPCMPESTRI::my_init(void *p)
{
	this->name = "CPCMPESTRI";
	this->alias = "PCMPESTRI";
	return 0;
}

CPCMPESTRI::CPCMPESTRI()
{
	this->my_init();
}

CPCMPESTRI::~CPCMPESTRI()
{

}
