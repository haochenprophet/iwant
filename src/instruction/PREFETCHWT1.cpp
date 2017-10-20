#include "PREFETCHWT1.h"
int CPREFETCHWT1::my_init(void *p)
{
	this->name = "CPREFETCHWT1";
	this->alias = "PREFETCHWT1";
	return 0;
}

CPREFETCHWT1::CPREFETCHWT1()
{
	this->my_init();
}

CPREFETCHWT1::~CPREFETCHWT1()
{

}
