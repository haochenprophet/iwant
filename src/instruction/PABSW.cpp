#include "PABSW.h"
int CPABSW::my_init(void *p)
{
	this->name = "CPABSW";
	this->alias = "PABSW";
	return 0;
}

CPABSW::CPABSW()
{
	this->my_init();
}

CPABSW::~CPABSW()
{

}
