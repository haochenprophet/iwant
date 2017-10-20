#include "POPFQ.h"
int CPOPFQ::my_init(void *p)
{
	this->name = "CPOPFQ";
	this->alias = "POPFQ";
	return 0;
}

CPOPFQ::CPOPFQ()
{
	this->my_init();
}

CPOPFQ::~CPOPFQ()
{

}
