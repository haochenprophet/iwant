#include "STD.h"
int CSTD::my_init(void *p)
{
	this->name = "CSTD";
	this->alias = "STD";
	return 0;
}

CSTD::CSTD()
{
	this->my_init();
}

CSTD::~CSTD()
{

}
