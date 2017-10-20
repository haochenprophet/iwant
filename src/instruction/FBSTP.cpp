#include "FBSTP.h"
int CFBSTP::my_init(void *p)
{
	this->name = "CFBSTP";
	this->alias = "FBSTP";
	return 0;
}

CFBSTP::CFBSTP()
{
	this->my_init();
}

CFBSTP::~CFBSTP()
{

}
