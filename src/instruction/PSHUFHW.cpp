#include "PSHUFHW.h"
int CPSHUFHW::my_init(void *p)
{
	this->name = "CPSHUFHW";
	this->alias = "PSHUFHW";
	return 0;
}

CPSHUFHW::CPSHUFHW()
{
	this->my_init();
}

CPSHUFHW::~CPSHUFHW()
{

}
