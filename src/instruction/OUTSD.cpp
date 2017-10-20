#include "OUTSD.h"
int COUTSD::my_init(void *p)
{
	this->name = "COUTSD";
	this->alias = "OUTSD";
	return 0;
}

COUTSD::COUTSD()
{
	this->my_init();
}

COUTSD::~COUTSD()
{

}
