#include "PSUBSB.h"
int CPSUBSB::my_init(void *p)
{
	this->name = "CPSUBSB";
	this->alias = "PSUBSB";
	return 0;
}

CPSUBSB::CPSUBSB()
{
	this->my_init();
}

CPSUBSB::~CPSUBSB()
{

}
