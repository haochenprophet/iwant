#include "KUNPCKWD.h"
int CKUNPCKWD::my_init(void *p)
{
	this->name = "CKUNPCKWD";
	this->alias = "KUNPCKWD";
	return 0;
}

CKUNPCKWD::CKUNPCKWD()
{
	this->my_init();
}

CKUNPCKWD::~CKUNPCKWD()
{

}
