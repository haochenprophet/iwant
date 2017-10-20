#include "LAHF.h"
int CLAHF::my_init(void *p)
{
	this->name = "CLAHF";
	this->alias = "LAHF";
	return 0;
}

CLAHF::CLAHF()
{
	this->my_init();
}

CLAHF::~CLAHF()
{

}
