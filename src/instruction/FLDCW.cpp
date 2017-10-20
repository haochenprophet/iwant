#include "FLDCW.h"
int CFLDCW::my_init(void *p)
{
	this->name = "CFLDCW";
	this->alias = "FLDCW";
	return 0;
}

CFLDCW::CFLDCW()
{
	this->my_init();
}

CFLDCW::~CFLDCW()
{

}
