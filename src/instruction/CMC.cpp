#include "CMC.h"
int CCMC::my_init(void *p)
{
	this->name = "CCMC";
	this->alias = "CMC";
	return 0;
}

CCMC::CCMC()
{
	this->my_init();
}

CCMC::~CCMC()
{

}
