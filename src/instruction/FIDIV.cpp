#include "FIDIV.h"
int CFIDIV::my_init(void *p)
{
	this->name = "CFIDIV";
	this->alias = "FIDIV";
	return 0;
}

CFIDIV::CFIDIV()
{
	this->my_init();
}

CFIDIV::~CFIDIV()
{

}
