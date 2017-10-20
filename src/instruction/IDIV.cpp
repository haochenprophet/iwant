#include "IDIV.h"
int CIDIV::my_init(void *p)
{
	this->name = "CIDIV";
	this->alias = "IDIV";
	return 0;
}

CIDIV::CIDIV()
{
	this->my_init();
}

CIDIV::~CIDIV()
{

}
