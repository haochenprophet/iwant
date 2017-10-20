#include "VRANGESS.h"
int CVRANGESS::my_init(void *p)
{
	this->name = "CVRANGESS";
	this->alias = "VRANGESS";
	return 0;
}

CVRANGESS::CVRANGESS()
{
	this->my_init();
}

CVRANGESS::~CVRANGESS()
{

}
