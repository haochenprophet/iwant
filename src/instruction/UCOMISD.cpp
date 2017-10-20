#include "UCOMISD.h"
int CUCOMISD::my_init(void *p)
{
	this->name = "CUCOMISD";
	this->alias = "UCOMISD";
	return 0;
}

CUCOMISD::CUCOMISD()
{
	this->my_init();
}

CUCOMISD::~CUCOMISD()
{

}
