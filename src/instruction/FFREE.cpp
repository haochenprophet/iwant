#include "FFREE.h"
int CFFREE::my_init(void *p)
{
	this->name = "CFFREE";
	this->alias = "FFREE";
	return 0;
}

CFFREE::CFFREE()
{
	this->my_init();
}

CFFREE::~CFFREE()
{

}
