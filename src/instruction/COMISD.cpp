#include "COMISD.h"
int CCOMISD::my_init(void *p)
{
	this->name = "CCOMISD";
	this->alias = "COMISD";
	return 0;
}

CCOMISD::CCOMISD()
{
	this->my_init();
}

CCOMISD::~CCOMISD()
{

}
