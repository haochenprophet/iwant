#include "VERR.h"
int CVERR::my_init(void *p)
{
	this->name = "CVERR";
	this->alias = "VERR";
	return 0;
}

CVERR::CVERR()
{
	this->my_init();
}

CVERR::~CVERR()
{

}
