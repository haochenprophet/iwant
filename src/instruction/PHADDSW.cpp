#include "PHADDSW.h"
int CPHADDSW::my_init(void *p)
{
	this->name = "CPHADDSW";
	this->alias = "PHADDSW";
	return 0;
}

CPHADDSW::CPHADDSW()
{
	this->my_init();
}

CPHADDSW::~CPHADDSW()
{

}
