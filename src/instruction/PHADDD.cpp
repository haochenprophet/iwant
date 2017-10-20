#include "PHADDD.h"
int CPHADDD::my_init(void *p)
{
	this->name = "CPHADDD";
	this->alias = "PHADDD";
	return 0;
}

CPHADDD::CPHADDD()
{
	this->my_init();
}

CPHADDD::~CPHADDD()
{

}
