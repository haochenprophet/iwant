#include "FSUBP.h"
int CFSUBP::my_init(void *p)
{
	this->name = "CFSUBP";
	this->alias = "FSUBP";
	return 0;
}

CFSUBP::CFSUBP()
{
	this->my_init();
}

CFSUBP::~CFSUBP()
{

}
