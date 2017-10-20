#include "FCOMPP.h"
int CFCOMPP::my_init(void *p)
{
	this->name = "CFCOMPP";
	this->alias = "FCOMPP";
	return 0;
}

CFCOMPP::CFCOMPP()
{
	this->my_init();
}

CFCOMPP::~CFCOMPP()
{

}
