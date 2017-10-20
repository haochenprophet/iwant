#include "FUCOMPP.h"
int CFUCOMPP::my_init(void *p)
{
	this->name = "CFUCOMPP";
	this->alias = "FUCOMPP";
	return 0;
}

CFUCOMPP::CFUCOMPP()
{
	this->my_init();
}

CFUCOMPP::~CFUCOMPP()
{

}
