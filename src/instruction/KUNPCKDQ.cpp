#include "KUNPCKDQ.h"
int CKUNPCKDQ::my_init(void *p)
{
	this->name = "CKUNPCKDQ";
	this->alias = "KUNPCKDQ";
	return 0;
}

CKUNPCKDQ::CKUNPCKDQ()
{
	this->my_init();
}

CKUNPCKDQ::~CKUNPCKDQ()
{

}
