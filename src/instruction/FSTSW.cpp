#include "FSTSW.h"
int CFSTSW::my_init(void *p)
{
	this->name = "CFSTSW";
	this->alias = "FSTSW";
	return 0;
}

CFSTSW::CFSTSW()
{
	this->my_init();
}

CFSTSW::~CFSTSW()
{

}
