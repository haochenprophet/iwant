#include "FIADD.h"
int CFIADD::my_init(void *p)
{
	this->name = "CFIADD";
	this->alias = "FIADD";
	return 0;
}

CFIADD::CFIADD()
{
	this->my_init();
}

CFIADD::~CFIADD()
{

}
