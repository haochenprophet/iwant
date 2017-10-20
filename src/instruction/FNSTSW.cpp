#include "FNSTSW.h"
int CFNSTSW::my_init(void *p)
{
	this->name = "CFNSTSW";
	this->alias = "FNSTSW";
	return 0;
}

CFNSTSW::CFNSTSW()
{
	this->my_init();
}

CFNSTSW::~CFNSTSW()
{

}
