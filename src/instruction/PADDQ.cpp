#include "PADDQ.h"
int CPADDQ::my_init(void *p)
{
	this->name = "CPADDQ";
	this->alias = "PADDQ";
	return 0;
}

CPADDQ::CPADDQ()
{
	this->my_init();
}

CPADDQ::~CPADDQ()
{

}
