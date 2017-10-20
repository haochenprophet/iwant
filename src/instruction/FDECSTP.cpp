#include "FDECSTP.h"
int CFDECSTP::my_init(void *p)
{
	this->name = "CFDECSTP";
	this->alias = "FDECSTP";
	return 0;
}

CFDECSTP::CFDECSTP()
{
	this->my_init();
}

CFDECSTP::~CFDECSTP()
{

}
