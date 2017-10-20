#include "PSUBQ.h"
int CPSUBQ::my_init(void *p)
{
	this->name = "CPSUBQ";
	this->alias = "PSUBQ";
	return 0;
}

CPSUBQ::CPSUBQ()
{
	this->my_init();
}

CPSUBQ::~CPSUBQ()
{

}
