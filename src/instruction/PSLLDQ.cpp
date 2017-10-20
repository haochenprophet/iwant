#include "PSLLDQ.h"
int CPSLLDQ::my_init(void *p)
{
	this->name = "CPSLLDQ";
	this->alias = "PSLLDQ";
	return 0;
}

CPSLLDQ::CPSLLDQ()
{
	this->my_init();
}

CPSLLDQ::~CPSLLDQ()
{

}
