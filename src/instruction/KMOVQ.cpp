#include "KMOVQ.h"
int CKMOVQ::my_init(void *p)
{
	this->name = "CKMOVQ";
	this->alias = "KMOVQ";
	return 0;
}

CKMOVQ::CKMOVQ()
{
	this->my_init();
}

CKMOVQ::~CKMOVQ()
{

}
