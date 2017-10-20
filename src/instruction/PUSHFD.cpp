#include "PUSHFD.h"
int CPUSHFD::my_init(void *p)
{
	this->name = "CPUSHFD";
	this->alias = "PUSHFD";
	return 0;
}

CPUSHFD::CPUSHFD()
{
	this->my_init();
}

CPUSHFD::~CPUSHFD()
{

}
