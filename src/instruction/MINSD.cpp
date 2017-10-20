#include "MINSD.h"
int CMINSD::my_init(void *p)
{
	this->name = "CMINSD";
	this->alias = "MINSD";
	return 0;
}

CMINSD::CMINSD()
{
	this->my_init();
}

CMINSD::~CMINSD()
{

}
