#include "PSRLD.h"
int CPSRLD::my_init(void *p)
{
	this->name = "CPSRLD";
	this->alias = "PSRLD";
	return 0;
}

CPSRLD::CPSRLD()
{
	this->my_init();
}

CPSRLD::~CPSRLD()
{

}
