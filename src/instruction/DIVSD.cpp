#include "DIVSD.h"
int CDIVSD::my_init(void *p)
{
	this->name = "CDIVSD";
	this->alias = "DIVSD";
	return 0;
}

CDIVSD::CDIVSD()
{
	this->my_init();
}

CDIVSD::~CDIVSD()
{

}
