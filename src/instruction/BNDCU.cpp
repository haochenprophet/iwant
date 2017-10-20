#include "BNDCU.h"
int CBNDCU::my_init(void *p)
{
	this->name = "CBNDCU";
	this->alias = "BNDCU";
	return 0;
}

CBNDCU::CBNDCU()
{
	this->my_init();
}

CBNDCU::~CBNDCU()
{

}
