#include "FLDPI.h"
int CFLDPI::my_init(void *p)
{
	this->name = "CFLDPI";
	this->alias = "FLDPI";
	return 0;
}

CFLDPI::CFLDPI()
{
	this->my_init();
}

CFLDPI::~CFLDPI()
{

}
