#include "PUSHFQ.h"
int CPUSHFQ::my_init(void *p)
{
	this->name = "CPUSHFQ";
	this->alias = "PUSHFQ";
	return 0;
}

CPUSHFQ::CPUSHFQ()
{
	this->my_init();
}

CPUSHFQ::~CPUSHFQ()
{

}
