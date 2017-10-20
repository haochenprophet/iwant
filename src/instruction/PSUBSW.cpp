#include "PSUBSW.h"
int CPSUBSW::my_init(void *p)
{
	this->name = "CPSUBSW";
	this->alias = "PSUBSW";
	return 0;
}

CPSUBSW::CPSUBSW()
{
	this->my_init();
}

CPSUBSW::~CPSUBSW()
{

}
