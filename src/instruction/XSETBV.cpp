#include "XSETBV.h"
int CXSETBV::my_init(void *p)
{
	this->name = "CXSETBV";
	this->alias = "XSETBV";
	return 0;
}

CXSETBV::CXSETBV()
{
	this->my_init();
}

CXSETBV::~CXSETBV()
{

}
