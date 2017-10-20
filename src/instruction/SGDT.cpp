#include "SGDT.h"
int CSGDT::my_init(void *p)
{
	this->name = "CSGDT";
	this->alias = "SGDT";
	return 0;
}

CSGDT::CSGDT()
{
	this->my_init();
}

CSGDT::~CSGDT()
{

}
