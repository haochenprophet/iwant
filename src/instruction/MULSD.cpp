#include "MULSD.h"
int CMULSD::my_init(void *p)
{
	this->name = "CMULSD";
	this->alias = "MULSD";
	return 0;
}

CMULSD::CMULSD()
{
	this->my_init();
}

CMULSD::~CMULSD()
{

}
