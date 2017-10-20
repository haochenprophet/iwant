#include "SIDT.h"
int CSIDT::my_init(void *p)
{
	this->name = "CSIDT";
	this->alias = "SIDT";
	return 0;
}

CSIDT::CSIDT()
{
	this->my_init();
}

CSIDT::~CSIDT()
{

}
