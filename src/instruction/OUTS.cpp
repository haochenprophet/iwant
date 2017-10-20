#include "OUTS.h"
int COUTS::my_init(void *p)
{
	this->name = "COUTS";
	this->alias = "OUTS";
	return 0;
}

COUTS::COUTS()
{
	this->my_init();
}

COUTS::~COUTS()
{

}
