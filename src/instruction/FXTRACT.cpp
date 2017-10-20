#include "FXTRACT.h"
int CFXTRACT::my_init(void *p)
{
	this->name = "CFXTRACT";
	this->alias = "FXTRACT";
	return 0;
}

CFXTRACT::CFXTRACT()
{
	this->my_init();
}

CFXTRACT::~CFXTRACT()
{

}
