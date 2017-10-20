#include "PMINUB.h"
int CPMINUB::my_init(void *p)
{
	this->name = "CPMINUB";
	this->alias = "PMINUB";
	return 0;
}

CPMINUB::CPMINUB()
{
	this->my_init();
}

CPMINUB::~CPMINUB()
{

}
