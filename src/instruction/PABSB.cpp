#include "PABSB.h"
int CPABSB::my_init(void *p)
{
	this->name = "CPABSB";
	this->alias = "PABSB";
	return 0;
}

CPABSB::CPABSB()
{
	this->my_init();
}

CPABSB::~CPABSB()
{

}
