#include "PCMPISTRI.h"
int CPCMPISTRI::my_init(void *p)
{
	this->name = "CPCMPISTRI";
	this->alias = "PCMPISTRI";
	return 0;
}

CPCMPISTRI::CPCMPISTRI()
{
	this->my_init();
}

CPCMPISTRI::~CPCMPISTRI()
{

}
