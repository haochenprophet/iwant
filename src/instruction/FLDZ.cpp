#include "FLDZ.h"
int CFLDZ::my_init(void *p)
{
	this->name = "CFLDZ";
	this->alias = "FLDZ";
	return 0;
}

CFLDZ::CFLDZ()
{
	this->my_init();
}

CFLDZ::~CFLDZ()
{

}
