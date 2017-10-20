#include "PADDW.h"
int CPADDW::my_init(void *p)
{
	this->name = "CPADDW";
	this->alias = "PADDW";
	return 0;
}

CPADDW::CPADDW()
{
	this->my_init();
}

CPADDW::~CPADDW()
{

}
