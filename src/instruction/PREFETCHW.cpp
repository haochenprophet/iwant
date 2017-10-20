#include "PREFETCHW.h"
int CPREFETCHW::my_init(void *p)
{
	this->name = "CPREFETCHW";
	this->alias = "PREFETCHW";
	return 0;
}

CPREFETCHW::CPREFETCHW()
{
	this->my_init();
}

CPREFETCHW::~CPREFETCHW()
{

}
