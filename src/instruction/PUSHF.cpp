#include "PUSHF.h"
int CPUSHF::my_init(void *p)
{
	this->name = "CPUSHF";
	this->alias = "PUSHF";
	return 0;
}

CPUSHF::CPUSHF()
{
	this->my_init();
}

CPUSHF::~CPUSHF()
{

}
