#include "PSUBW.h"
int CPSUBW::my_init(void *p)
{
	this->name = "CPSUBW";
	this->alias = "PSUBW";
	return 0;
}

CPSUBW::CPSUBW()
{
	this->my_init();
}

CPSUBW::~CPSUBW()
{

}
