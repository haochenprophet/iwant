#include "CLFLUSHOPT.h"
int CCLFLUSHOPT::my_init(void *p)
{
	this->name = "CCLFLUSHOPT";
	this->alias = "CLFLUSHOPT";
	return 0;
}

CCLFLUSHOPT::CCLFLUSHOPT()
{
	this->my_init();
}

CCLFLUSHOPT::~CCLFLUSHOPT()
{

}
