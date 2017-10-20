#include "FISTP.h"
int CFISTP::my_init(void *p)
{
	this->name = "CFISTP";
	this->alias = "FISTP";
	return 0;
}

CFISTP::CFISTP()
{
	this->my_init();
}

CFISTP::~CFISTP()
{

}
