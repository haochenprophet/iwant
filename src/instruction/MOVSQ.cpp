#include "MOVSQ.h"
int CMOVSQ::my_init(void *p)
{
	this->name = "CMOVSQ";
	this->alias = "MOVSQ";
	return 0;
}

CMOVSQ::CMOVSQ()
{
	this->my_init();
}

CMOVSQ::~CMOVSQ()
{

}
