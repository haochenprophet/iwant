#include "PINSRQ.h"
int CPINSRQ::my_init(void *p)
{
	this->name = "CPINSRQ";
	this->alias = "PINSRQ";
	return 0;
}

CPINSRQ::CPINSRQ()
{
	this->my_init();
}

CPINSRQ::~CPINSRQ()
{

}
