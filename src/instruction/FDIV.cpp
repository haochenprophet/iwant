#include "FDIV.h"
int CFDIV::my_init(void *p)
{
	this->name = "CFDIV";
	this->alias = "FDIV";
	return 0;
}

CFDIV::CFDIV()
{
	this->my_init();
}

CFDIV::~CFDIV()
{

}
