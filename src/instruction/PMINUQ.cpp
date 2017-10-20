#include "PMINUQ.h"
int CPMINUQ::my_init(void *p)
{
	this->name = "CPMINUQ";
	this->alias = "PMINUQ";
	return 0;
}

CPMINUQ::CPMINUQ()
{
	this->my_init();
}

CPMINUQ::~CPMINUQ()
{

}
