#include "FCOMP.h"
int CFCOMP::my_init(void *p)
{
	this->name = "CFCOMP";
	this->alias = "FCOMP";
	return 0;
}

CFCOMP::CFCOMP()
{
	this->my_init();
}

CFCOMP::~CFCOMP()
{

}
