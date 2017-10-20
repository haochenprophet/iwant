#include "PABSD.h"
int CPABSD::my_init(void *p)
{
	this->name = "CPABSD";
	this->alias = "PABSD";
	return 0;
}

CPABSD::CPABSD()
{
	this->my_init();
}

CPABSD::~CPABSD()
{

}
