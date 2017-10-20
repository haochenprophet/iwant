#include "CLAC.h"
int CCLAC::my_init(void *p)
{
	this->name = "CCLAC";
	this->alias = "CLAC";
	return 0;
}

CCLAC::CCLAC()
{
	this->my_init();
}

CCLAC::~CCLAC()
{

}
